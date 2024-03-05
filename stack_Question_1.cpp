// Calculate NGE(next greater element) using stack in stl

#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> &v)
{
    vector<int> nge(v.size());
    stack<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        while(!s.empty() && v[i] > v[s.top()])
        {
            nge[s.top()]= i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        nge[s.top()]=-1;
        s.pop();
    }
    return nge;

}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> nge = NGE(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
        nge[i]==-1? cout << -1 << endl : cout << v[nge[i]] << endl;
        
    }
    return 0;
}