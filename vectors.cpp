// Vectors in STL

#include <bits/stdc++.h>
using namespace std;

// function for printing vector
void print_vector(vector<int> &v)
{
    cout << "size : " << v.size() << endl;
    // time complexity of size() function is O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    // vectors similiar to arrays
    // vector is an array of dynamic size means whose size can vary
    // syntax :- vector<datatype> vector_name;
    vector<int> v; 
    // now this vector is empty
    // for inserting values in vector

    int n;
    cin >> n ; // size of vector;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // add the value at the end of the vector 
        // it has time complexity of O(1)

        // print_vector(v);
        // it shows the vector is of dynamic size
    }
    print_vector(v);

    // we can also declare size of vector and in this it will be initialized to 0
    vector<int> v1(10);
    print_vector(v1);
    // in this increase the size late on also
    v1.push_back(5);
    print_vector(v1); 

    //with declaration if we want to initialize the vector with some value 
    vector<int> v2(10,4);
    print_vector(v2);

    // if we want to remove element from last use pop_back()  function
    v2.pop_back();
    // time complexity will be O(1)
    print_vector(v2);

    // we can also copy the vector from one to another
    // and in this copy is send
    // in array no new array is formed 
    vector <int> v3 = v1;
    // time complexity for copying the vectors will be O(n)
    print_vector(v3);
    v3.push_back(100);
    print_vector(v3);
    print_vector(v1); // so here v1 will not change
    // but in array v1 will be changed and we cannot not also copy the whole array like this

    // if we pass vector in some function then at that time also a copy
    // of vector is created which is of O(n) time complexity 
    // which is very expensive so we mostly use call by refrence in such cases to save time

    return 0;
}