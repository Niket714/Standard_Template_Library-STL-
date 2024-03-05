// Stack and Queue in STL
// every fuction of stack and queue like push, pop , size, top, front , empty etc are inbuilt and we can directly use them

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(5);
    s.push(3); 
    s.push(7); 
    s.push(9);

    cout << s.size() << endl;
    
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    } 


    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("kek");
    q.push("sas");
    q.push("eke");

    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}