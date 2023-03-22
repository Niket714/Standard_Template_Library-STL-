// unordered maps

#include <bits/stdc++.h>
using namespace std;

void print_map(auto &map)
{
    cout << "size : " << map.size() << endl;
    for(auto &pr : map)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    // the diff between map and unordered_map
    // 1. inbuilt implementation
    // 2. time complexity
    // 3. valid keys datatype

    // hash tables are used in unordered maps
    unordered_map<int,string> m;
    m[1] = "abc";
    m[5]= "cde";
    m[2]= "efg";
    print_map(m);
    // the time complexity of insertion and access become of O(1)

    // we can also apply find and erase operation same as map
    //  only the time complexity of it becomes O(1)
    //  so if order doesn't matter for us then we can use unordered maps
    // ispite of maps
     
    //  in case of maps we can use complex data type 
    //  but in case of unordered maps we can not able to use every data type
    //  complex data type cannot be stored in unordered map
    // unordered_map<pair<int,int>, string> m1;
    // this above statement gives error because unordered_map is stored in hash table
    // so hash value is created and hash value of pair cannot be created
    //  hash function is defined for basic datatype like int, double, char and string also



    // multi map
    // it is used to store one key more than  one time
    multimap<int, int> m;

    //  in case we have to store multiple value of one key than we can use
    map<int , vector<string>> v;
    return 0;
}