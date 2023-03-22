// set store the unique values set

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
    auto it = s.find("abkd");  // O(log(n))
    if (it == s.end())
        cout << "not found" << endl;
    else
        cout << *it << endl;

    auto it1 = s.find("abckd");
    if (it1 != s.end())
        s.erase(it1); // O(log(n))

    print_set(s);

    unordered_set<int> v ;
    // same as set but the time complexity become O(1) everywhere
    // we can use unordered set in places where order doesnot necessary for us
    

    
    return 0;
}