#include <bits/stdc++.h>
using namespace std;

void print_multiset(multiset<string> &s)
{
    for (auto &pr : s)
    {
        cout << pr << endl;
    }
}
int main()
{
    multiset<string> m;
    m.insert("abc");  // O(log(n))
    m.insert("cde");
    m.insert("abcdeef");
    m.insert("abc");
    // print_multiset(m);

    auto it = m.find("abc"); // O(log(n))
    if (it != m.end())
        m.erase(it);         // O(log(n))
    //  this will delete only one item from the multiset when we call it by iterator

    // m.erase("abc"); // this will delete all the values from multiset 
    // inspite of how many times it is present in that multiset

    print_multiset(m);
    return 0;
}