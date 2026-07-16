#include <bits/stdc++.h>
using namespace std;

int main() {

    // Create a list
    list<int> l = {10, 20, 30, 40, 50};

    // Copy the list using assignment operator
    list<int> l2 = l;

    cout << "Original List (l): ";
    for (int val : l)
        cout << val << " ";
    cout << endl;

    cout << "Copied List (l2): ";
    for (int val : l2)
        cout << val << " ";
    cout << endl;


    // assign()
    list<int> l3;
    l3.assign(l.begin(), l.end());

    cout << "After assign() to l3: ";
    for (int val : l3)
        cout << val << " ";
    cout << endl;


    // Range constructor
    list<int> l4(l.begin(), l.end());

    cout << "List created using range constructor (l4): ";
    for (int val : l4)
        cout << val << " ";
    cout << endl;


    // push_back() and push_front()
    list<int> l5 = {100, 200, 300};

    l5.push_back(100);
    l5.push_front(400);

    cout << "After push_back() and push_front(): ";
    for (int val : l5)
        cout << val << " ";
    cout << endl;


    // pop_back() and pop_front()
    l5.pop_back();
    l5.pop_front();

    cout << "After pop_back() and pop_front(): ";
    for (int val : l5)
        cout << val << " ";
    cout << endl;


    // Access an element using next()
    // next(l.begin(), 2) points to the 3rd element
    cout << "Element at index 2 of l: "
         << *next(l.begin(), 2) << endl;


    // Insert a single element at index 2
    cout << "Before insert into l5: ";
    for (int val : l5)
        cout << val << " ";
    cout << endl;

    l5.insert(next(l5.begin(), 2), 9000);

    cout << "After inserting 9000 at index 2: ";
    for (int val : l5)
        cout << val << " ";
    cout << endl;


    // Insert a range of elements from l6 into l3
    list<int> l6 = {2, 4};

    l3.insert(next(l3.begin(), 2), l6.begin(), l6.end());

    cout << "After inserting l6 into l3 at index 2: ";
    for (int val : l3)
        cout << val << " ";
    cout << endl;

    // erase() - remove elements from index 2 to index 3
    l3.erase(next(l3.begin(), 2), next(l3.begin(), 4));

    cout << "After erase(index 2 to 3): ";
    for (int val : l3)
        cout << val << " ";
    cout << endl;

    return 0;
}