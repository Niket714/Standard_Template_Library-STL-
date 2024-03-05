// ordered set
// 1. insert x element in the set
// 2. remove x element from the set
// 3. find number of elements smaller than the given x in the set
// 4. print element present at the xth index in the set

// ordered set is same as that of set but 2 extra functionalities

// 1. finding number of element smaller than the x in the set
//    A.order_of_key(X)  : O(logn)

// 2. finding the element at the xth index in the set
//    *A.find_by_order(x)  : o(logn)


#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

// order_of_key , find_by_order
#define pbds  tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>  // asending order of set

// #define pbds tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> // desending order in set

// #define pbds tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> // asending order of multi_set

// #define pbds tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update> // desending order of multi_set


int main(){
    pbds a;

    a.insert(1);
    a.insert(2);
    a.insert(10);
    a.insert(7);
    a.insert(2); // ordered set only contain unique values

    for(auto it : a){
        cout << it << " ";
    }
    cout << endl;


    cout << "0th index element: " << *a.find_by_order(0) << endl; 
    cout << "1st index element: " << *a.find_by_order(1) << endl; 
    cout << "2nd index element: " << *a.find_by_order(2) << endl; 
    cout << "3rd index element: " << *a.find_by_order(3) << endl; 

    cout << endl;

    cout << "Number of elements less than 6: " << a.order_of_key(7) << endl; 
    cout << "Number of elements less than 8: " << a.order_of_key(8) << endl; 

    a.erase(1);
    cout << endl;

    for(auto it : a){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}


