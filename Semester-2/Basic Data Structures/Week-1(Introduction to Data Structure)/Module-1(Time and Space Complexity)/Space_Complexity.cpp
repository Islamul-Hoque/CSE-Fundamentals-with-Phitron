#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;        // o(1)
    cin >> n;
    int sum = 0;  // o(1)

    // Ex-1
    for (int i = 0; i < n; i++)   // o(N)
        sum +=i;

    // EX-2
    int a[n];  // o(n)
    for (int i = 0; i < n; i++)   // o(N)
        cin >> a[i];

    // EX-3
    int a[n][n];  // o(n*n)
    for (int i = 0; i < n; i++)   // o(n*n)
        cin >> a[i][i];

    return 0;
}