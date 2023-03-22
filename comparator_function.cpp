#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define p = 1000000007

// bool should_i_swap(int a, int b)
// {
//     if (a > b)
//         return true;
//     return false;
// }
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second ;
}
int32_t main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for(auto &pr : v)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}