#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define p = 1000000007

int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout << min << endl;
    int max = *max_element(v.begin(), v.end());
    cout << max << endl;

    int sum = accumulate(v.begin(), v.end(), 0); 
    // here 0 is the initial value of the sum
    cout << sum << endl;

    int ct= count(v.begin(), v.end(), 3);
    //  give frequency of 3 in the vector
    cout << ct << endl;

    auto it = find(v.begin(), v.end(), 5);
    if(it != v.end())
    cout << *it << endl;
    else
    cout << "Element not found" << endl;


    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}