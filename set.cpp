// Set in STL
// Set stores the unique values in stl in increasing order

#include <bits/stdc++.h>
using namespace std;

void print_set(auto &set)
{
    for (auto &pr : set)
    {
        cout << pr << endl;
    }
}
int main()
{
    set<string> s;
    s.insert("abc"); // insertion takes O(log(n)) time
    s.insert("edjfkd");
    s.insert("abckd");

    print_set(s);
    cout << endl;
    auto it = s.find("abkd");  // O(log(n))
    if (it == s.end())
        cout << "not found" << endl;
    else
        cout << *it << endl;

    cout << endl;

    auto it1 = s.find("abckd");
    if (it1 != s.end())
        s.erase(it1); // O(log(n))

    print_set(s);
    cout << endl;

    // set don't have indexes so we can't iterate tehm using indexing

    // Nesting in set
    set<pair<string, string>> ss;
    ss.insert({"ab" , "bc"});
    ss.insert({"aaa" , "ad"});
    ss.insert({"za" , "bc"});

    for(auto it : ss){
        cout << it.first << " " << it.second << endl; 
    }
    
    return 0;
}