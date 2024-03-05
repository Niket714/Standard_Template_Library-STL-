// hashing technique can be done using maps

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> map ; 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        map[k]++;
    }
    for(auto pr : map)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    
    return 0;
}