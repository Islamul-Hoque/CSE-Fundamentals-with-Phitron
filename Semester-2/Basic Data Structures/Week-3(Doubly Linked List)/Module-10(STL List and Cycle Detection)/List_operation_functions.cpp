#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 40, 30, 10};
    list<int> l = {100, 200, 400, 300, 100};
    list<int> l2 = {10, 20, 10, 30, 10};

    // remove() - remove all occurrences of a value
    l.remove(100);

    cout << "After remove(100): ";
    for (int val : l)
    cout << val << " ";
    cout << endl;

    // sort() - sort vector in descending order
    sort(v.begin(), v.end(), greater<int>());

    cout << "Vector after descending sort: ";
    for (int val : v)
        cout << val << " ";
    cout << endl;

    // sort() - sort vector in ascending order
    sort(v.begin(), v.end());

    cout << "Vector after ascending sort: ";
    for (int val : v)
        cout << val << " ";
    cout << endl;

    // sort() - sort list in ascending order
    l2.sort();

    cout << "List after ascending sort: ";
    for (int val : l2)
        cout << val << " ";
    cout << endl;

    // sort() - sort list in descending order
    l2.sort(greater<int>());

    cout << "List after descending sort: ";
    for (int val : l2)
        cout << val << " ";
    cout << endl;

    // unique() - remove consecutive duplicate elements
    l2.unique();

    cout << "List after unique(): ";
    for (int val : l2)
        cout << val << " ";
    cout << endl;

    // reverse() - reverse the order of elements
    l2.reverse();

    cout << "List after reverse(): ";
    for (int val : l2)
        cout << val << " ";
    cout << endl;

    return 0;
}


