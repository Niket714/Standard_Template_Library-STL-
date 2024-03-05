// Priority queue in STL

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    // priority queue

    priority_queue<int> pq; // by default max heap
    priority_queue<int, vector<int>, greater<int>> p;  // min heap impkementation
    pq.push(1);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    pq.push(4);

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // In case of int we can also use other datatype like string, long long etc
    // also we can use pair<int,int> , vector<int> and all other data type

    priority_queue<pair<int,int>> q;
    // priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > q;

    q.push({1,2});
    q.push({2,1});
    q.push({0,5});
    q.push({5,5});
    q.push({8,2});

    while (!q.empty())
    {
        cout << q.top().first << " " <<q.top().second << endl;
        q.pop(); 
    }
    
    
    return 0;
}