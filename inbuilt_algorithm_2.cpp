// all_of none_of any_of algorithms
//  they return true and false
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc int t; cin >> t; while(t--) 
#define p = 1000000007

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << [](int x){return x+2;}(5) << endl;
    // lambda function;
    auto sum = [](int x, int y){return x+y;};
    cout << sum(2,3) << endl;

    vector<int> v = {2,-3,-5};
    cout << all_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl;
    // all the elements must satisfy the given lambda function

    cout << any_of(v.begin(), v.end(), [](int x){return x>0;}) << endl;
    // check if any one of the element will satisfy the condition

    cout << none_of(v.begin(), v.end(), [](int x){return x>0;}) << endl;
    // check if all the elements will not satisfy the condition
    

    return 0;
} 

