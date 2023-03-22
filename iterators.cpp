//  iterators in stl

// vectors are stored in continuous memeory locations
// iterators are like pointers in stl which is used to point the elements of any container
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 5, 4, 6, 3};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it = v.begin();
    // declaration and initialization of an iterator
    // v.begin() it points to the first element of the vector
    // v.end() it points to the next element of the last element of the vector
    // for accessing the value of an iterator it is done same as pointer
    cout << *it << endl;
    it++;
    cout << *it << endl;

    cout << "printing the whole vector\n";

    for (it = v.begin(); it < v.end(); it++)
    {
        cout << *it << endl;
    }

    // diff between it++ and it = it+1
    // it++ takes us to the next iterator
    // it= it+1 takes us to the next location
    // in case of vectors they both are same but not in other containers

    vector<pair<int, int>> v1 = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator it1;
    for (it1 = v1.begin(); it1 < v1.end(); it1++)
    {
        cout << (*it1).first << " " << (*it1).second << endl;
    }
    for (it1 = v1.begin(); it1 < v1.end(); it1++)
    {
        cout << it1->first << " " << it1->second << endl;
    }

    // (*it).first <=> it->first

    return 0;
}