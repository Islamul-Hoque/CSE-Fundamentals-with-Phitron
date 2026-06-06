#include <bits/stdc++.h>
using namespace std;

int main(){
    // Capacity
    string s = "hi nayeem";
    cout << s.size() << endl;
    cout << s.max_size() << endl; // 10^6
    cout << s.capacity() << endl; 

    s.clear();
    cout << s << endl << s.size() << endl;

    if(s.empty() ==true)  // OR if(s.size() ==0) 
    cout << "Empty";
    else cout << "Not Empty";

    return 0;
}