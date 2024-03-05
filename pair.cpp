// Pair in STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair is a class in stl which store two values
    // syntax  pair<datatype , datatype> pair_name;
    pair<int,string> p;
    // to put values in a pair there are two ways 
    // 1) internal function = make_pair;
    p= make_pair(4 , "niket");
    // for printing of values of pair we can use first and second
    cout << p.first << " " << p.second << endl;
    // 2) directly intialize in square brackets
    p = {5, "abcd"};
    cout << p.first << " " << p.second << endl;

    // we can take user input also
    cin >> p.first;
    cout << p.first << endl;

    //call by value
    // a copy is send in this case and if we change p1 then p will remain same

    pair<int,string> p1 = p;
    p1.first = 10;
    cout << p1.first << " " << p1.second << endl;
    cout << p.first << " " << p.second << endl;

    // call by refrence
    // in this if we vary p1 then it will automatically vary p
    pair<int,string> &p2 = p;
    p2.first = 1000;
    cout << p2.first << " " << p2.second << endl;
    cout << p.first << " " << p.second << endl;

    // these works same as we do in normal variables

    // it is mainly used where there is some relation between two array
    int a[] = {1,2,3};
    int b[] = { 10,20,30};
    // here a is related to b means a[i] is related to b[i]
    // in this case we can declare array of pair

    pair<int,int> p_array[3];
    p_array[0] = {1,10};
    p_array[1] = {2,20};
    p_array[2] = {3,30};
    
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    // now if we swap two elements then whole pair will be swaped and relation is maintained
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    



    return 0;
}