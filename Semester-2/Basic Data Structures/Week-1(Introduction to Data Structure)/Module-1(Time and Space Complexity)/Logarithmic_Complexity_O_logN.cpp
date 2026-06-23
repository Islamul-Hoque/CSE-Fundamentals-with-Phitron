#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Ex-1
    // Increment by multifly ==> i*=2
    for (int i = 1; i <=n; i*=2){ // o(log N)
        cout << i << endl;
    }

    // Ex-2
    // Decrement by division ==> i/=2
    for (int i = n; i >=1; i/=2){ // o(log N)
        cout << i << endl;
    }

    // Ex-3
    int k =2;
    for (int i = 1; i <=n; i++) { 
            cout << i << endl;
            i +=k;                // o(log N)
        }

    return 0;
}

