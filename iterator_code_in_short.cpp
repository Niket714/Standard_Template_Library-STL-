// auto and range based loops

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 4, 5, 6, 7, 8};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // vector<int>::iterator it = v.begin();
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // Range based loops

    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    // int this method a copy of each value from container is stored in value and the printed
    // but if we want to do some changes in vector then use call by refrence

    for (int &value : v)
        value++;
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    vector<pair<int, int>> p = {{1, 2}, {3, 4}};
    for (pair<int, int> value : p)
        cout << value.first << " " << value.second << endl;

    // auto keyword
    // it dynamically dertermines the data type of anything

    // auto a = 1.5;
    // cout << a << endl;

    
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // we don't need to  declare it and  can directly use it 
    // with auto keyword in it
    // it directly determines the datatype of the item 

    for (auto value : p)
        cout << value.first << " " << value.second << endl;
    



    return 0;
}