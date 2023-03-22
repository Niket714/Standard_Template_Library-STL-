/* 
Given N strings , print unique strings
in lexographical order with their frequency
N<= 10^5
|s| <= 100
lexographical order means the order in which it is stored in dictionary
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string , int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        // m[s] = m[s] +1;
        m[s]++;
    }
    for(auto &pr:m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    
    return 0;
}