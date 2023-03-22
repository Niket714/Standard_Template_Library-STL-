// maps and unordered maps

// map is a data structure which store key value pair
// it creates mapping from a key to a value which can be of same and diff data types
// in normal map the values are in sorted keys and in unordered map the value can be in any order

// map is implemented by red black trees data structure.. it is self balancing tree
#include <bits/stdc++.h>
using namespace std;

void print_map(auto &m)
{
    cout << "size : " << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;

        // it also takes time of O(log(n))
    }
    //  so the upper for loop has time complexity equal to O(n*log(n))
}
int main()
{
    map<int, string> m;
    m[1] = "abc"; // this takes O(log(n)) time where n is current size of map
    m[5] = "cde";
    m[3] = "efg"; // insertion and access both takes O(log(n)) time
    m.insert({4, "gfk"});
    m[6]; // in this case also 6 is inserted in map and has value as null string
    // the time complexity is not always of O(log(n)) it also depends on the size of the key
    // if key is string then the time complexity will become s.size()*log(n)

    // normal way of printing map
    // map<int,string> :: iterator it;
    // for ( it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // for(auto &value : m)
    // {
    //     cout << value.first << " " << value.second << endl;
    // }
    print_map(m);

    // the keys of the map are unique and if we insert the same key again then the value
    // of the existing key will be changed

    // for finding any value in a map
    auto it = m.find(3); // find returns an iterator
    // if found then the iterator pointing to that element and
    // if not found then it return m.end()
    if (it == m.end())
        cout << "Not Found" << endl;
    else
        cout << it->first << " " << it->second << endl;
    //  the time complexity of find operation is also O(log(n));

    m.erase(3); // we can use both of them with help of key or iterator both
    // if (it != m.end())  // we should check first if it is m.end() or not
    //     m.erase(it);
    print_map(m);
    // the time complexity of erase operation is also O(log(n));
    // it if pass some key in erase which is not present in map then it will return segmentation error

    m.clear();
    // it clear all the values of the map
    print_map(m);

    
    return 0;
}