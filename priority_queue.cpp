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

    for (int i = 0; i < 5; i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    
    return 0;
}