#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4, 5};

    // front() - access the first element
    cout<< "First element: " << l.front() << endl;

    // back() - access the last element
    cout << "Last element: " << l.back() << endl;

    // next() - access an element using iterator
    // next(l.begin(), 2) points to the 3rd element
    cout << "Element at index 2: " << *next(l.begin(), 2) << endl;


    // begin() - returns an iterator pointing to the first element
    cout << "Element pointed by begin(): "
         << *l.begin() << endl;


    // end() - points to the position after the last element
    // Therefore, *l.end() is invalid

    auto it = l.end();
    --it;

    cout << "Last element using end(): "
         << *it << endl;

    return 0;
}



