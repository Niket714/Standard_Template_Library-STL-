// Unordered Set in Stl

//                |     set             | unordered_set
// ---------------------------------------------------------
// Ordering        | increasing  order   | no ordering
//                 | (by default)        |

// Implementation  | Self balancing BST  | Hash Table
//                 | like Red-Black Tree |  

// search time     | log(n)              | O(1) -> Average 
//                 |                     | O(n) -> Worst Case

// Insertion time  | log(n) + Rebalance  | Same as search
                      
// Deletion time   | log(n) + Rebalance  | Same as search


#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s ;
    // same as set but the time complexity become O(1) everywhere
    // we can use unordered set in places where order doesnot necessary for us
    
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(7);
    s.insert(2);
 
    cout << "Elements of unordered_set: \n";
    for (auto it : s)
        cout << it << " ";
 
    return 0;
}