#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i*i <=n; i++){ // o(log N)
        if(n%i ==0){
            cout << i << " " << n/i << " ";
        }
    }

    return 0;
}

//  i <= sqrt(n) and i*i <=n same 