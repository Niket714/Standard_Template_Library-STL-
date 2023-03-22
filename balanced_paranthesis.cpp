#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

unordered_map<char, int> m = {{'[', -3}, {'(', -2}, {'{', -1}, {']', 3}, {')', 2}, {'}', 1}};
string isbalanced(string &str)
{
    stack<char> s;
    for (auto &pr : str)
    {
        if (m[pr] < 0){
            s.push(pr);
        }
        else{
            if (s.empty()){
                return "NO" ;
            }
            else{
                char ch = s.top();
                s.pop();
                if(m[ch]+ m[pr] != 0)
                    return "NO";
            }
        }
    }
    if(s.empty()) return "YES";
    return "NO";
}
int32_t main()
{
    tc
    {
        string s;
        cin >> s;
        cout << isbalanced(s) << endl;
    }
    return 0;
}