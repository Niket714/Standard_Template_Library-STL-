#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int, int>> &v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
void printvec(vector<int> &v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<pair<int, int>> v; // declaration of vector of pair
    vector<pair<int, int>> v1 = {{1, 2}, {3, 4}, {5, 6}};
    printvec(v1);

    // taking input from user
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    printvec(v);

    // array of vectors :- no of rows are fixed but length of column is not fixed
    int N;
    cin >> N;
    vector<int> v2[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v2[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printvec(v2[i]);
    }


    // vectors of vectors :- both no of rows and column are not fixed
    vector<vector<int>> v3;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector <int> temp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>> x;
            temp.push_back(x);
        }
        v3.push_back(temp);
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        printvec(v3[i]);
    }
    
    

    return 0;
}