#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};

    // 1. vector assign  
    // Way-1  
    vector<int> v2 = v;

    // index base loop
    cout << "Index-based loop (Way-1): " ;
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    // Way-2
    vector<int> p ={1, 3, 5, 7, 9};
    vector<int> v3;
    v3.assign(p.begin(), p.end());

    // Range base
    cout << endl << "Range base Loop (Way-2): " ;
    for (int x : v3)
        cout << x << " ";

    cout << endl << endl << "-------- Divider --------" << endl;

    // 2.PUSH
    p.push_back(100);
    cout << "After pushing 1 element: ";
    for(int y : p)
        cout << y << " ";

    // 3.POP
    p.pop_back();
    p.pop_back();
    cout << endl << "After popping 2 elements: ";
    for(int y : p)
        cout << y << " ";

    cout << endl  << endl << "-------- Divider --------" << endl;

    // 4.insert(position, value)
    v.insert(v.begin()+2, 100);
    cout << "Inserted 100 at 3rd position (index 2): ";
    for(int x : v)
    cout << x << " ";

    // insert full vector 
    cout << endl << "Inserted y2 into y: ";
    vector<int> y ={1, 2, 3};
    vector<int> y2 ={100, 200, 300};
    y.insert(y.begin()+3, y2.begin(), y2.end());
    for(int x : y ) 
        cout << x << " ";

    cout << endl  << endl << "-------- Divider --------" << endl;

    // 5.erase(position)
    vector<int> q ={1, 2, 3, 4, 5, 6, 7, 8};
    for(int x : q)
        cout << x << " ";
    q.erase(q.begin()+1, q.begin()+5);

    cout << endl << "Erase 2nd to 5th element: ";
    for(int x : q)
        cout << x << " ";

    return 0;
}