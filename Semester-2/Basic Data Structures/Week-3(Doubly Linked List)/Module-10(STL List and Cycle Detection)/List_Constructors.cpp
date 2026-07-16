// vector => dynamic array (contiguous memory)
// list   => doubly linked list (non-contiguous memory)

// Docs: https://docs.google.com/document/d/1IbS-qmFx6oRO-GyIG55yavdDUHpfHTNM/edit

#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    vector<int> v;

    // Empty list & vector size
    cout << "Empty list size: " << l.size() << endl;
    cout << "Empty vector size: " << v.size() << endl << endl;

    // Size initialization
    list<int> l2(10);      // list with 10 default-initialized elements
    vector<int> v2(20);    // vector with 20 default-initialized elements

    cout << "List l2 size: " << l2.size() << endl;
    cout << "Vector v2 size: " << v2.size() << endl << endl;

    // Initialization with values
    list<int> l3(10, 5);   // list of 10 elements, all = 5
    vector<int> v3(10, 6); // vector of 10 elements, all = 6

    cout << "List l3 first element: " << *l3.begin() << endl;
    cout << "List l3 end iterator (undefined dereference): " << *l3.end() << endl; 
    cout << "Vector v3[3]: " << v3[3] << endl << endl;

    // Printing list using iterator
    list<int> l4 = {1, 2, 3, 4, 5};
    cout << "List l4 (iterator): ";
    for(auto it = l4.begin(); it != l4.end(); it++)
        cout << *it << " ";
    cout << endl;

    // Printing list using range-based loop
    list<int> l5(l4);
    cout << "List l5 (range-based): ";
    for(int val : l5)
        cout << val << " ";
    cout << endl;

    // Array to list copy
    int a[] = {11, 12, 13, 14, 15};
    list<int> l6(a, a+3); // copy first 3 elements
    cout << "List l6 (from array): ";
    for(int val : l6)
        cout << val << " ";
    cout << endl << endl;

    // Vector printing
    vector<int> v4 = {6, 7, 8, 9, 10};
    cout << "Vector v4: ";
    for(int i = 0; i < v4.size(); i++)
        cout << v4[i] << " ";
    cout << endl;

    // Vector to list copy
    list<int> l7(v4.begin(), v4.end());
    cout << "List l7 (from vector): ";
    for(int val : l7)
        cout << val << " ";
    cout << endl;

    return 0;
}