#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define p = 1000000007

bool cmp(int a, int b)
{
    return a < b;
}
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    // for lowerbound and upperbound the vector should be sorted to work in O(logn) time.
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    auto it = lower_bound(v.begin(), v.end(), 5);
    // lowerbound returns the iterator of the number which is equal to that number and if equal number is not present then the
    // number which is just greater than this number
    if (it != v.end())
        cout << *it << endl;
    else
        cout << "NOT FOUND" << endl;

    auto i = upper_bound(v.begin(), v.end(), 5);
    // upperbound returns the iterator of the number which is just greater than the given number
    if (i != v.end())
        cout << *i << endl;
    else
        cout << "NOT FOUND" << endl;



    // lowerbound and upperbound in sets and maps

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    auto it = s.lower_bound(5);
    // s.lower_bound will be of time complexity of O(logn)

    // but if we use lower_bound(s.begin(), s.end(), 5) then it will be of O(n) which will give TLE

    return 0;
} 