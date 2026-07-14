#include <bits/stdc++.h>
using namespace std;

int main(){
    // Initialize list with values
    list<int> l = {11, 12, 13, 14, 15};

    // Print initial size and elements
    cout << "Initial list size: " << l.size() << endl;
    cout << "Initial list elements: ";
    for(int val : l)
        cout << val << " ";
    cout << endl;

    // Resize list to 8 elements, new elements = 100
    l.resize(8, 100);
    cout << "List after resize (size = " << l.size() << "): ";
    for(int val : l)
        cout << val << " ";
    cout << endl;

    // Clear the list
    l.clear();
    cout << "List after clear: ";
    if(l.empty())  
        cout << "Empty" << endl;
    else  
        cout << "Not Empty" << endl;

    return 0;
}
