#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string f_name, l_name;
        int ct;
        cin >> f_name >> l_name >> ct;
        for (int j = 0; j < ct; j++)
        {
            int x;
            cin >> x;
            m[{f_name, l_name}].push_back(x);
        }
    }
    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &marks = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << marks.size() << endl;
        for (auto &value : marks)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}