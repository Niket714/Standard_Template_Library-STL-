// Sorting in STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin() , a.end()); // this will sort from starting of array to end of array
    
    // sort has two inputs one is the starting address from where we have to start the sorting
    // and second is the next address of the array upto which we have to sort
    // sort(a.begin()+2,a.end()); // this will sort from the third element to the last element
    // sort(a.begin() , a.begin() + 4); // this will sort from the first element to the fourth element 

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // this sorting is known as introsort
    // Introsort being a hybrid sorting algorithm uses three sorting algorithm 
    // to minimise the running time, Quicksort, Heapsort and Insertion Sort 
    // time complexity of this sort is always O(n*logn)
    return 0;
}