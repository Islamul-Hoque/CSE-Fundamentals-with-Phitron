#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i <n; i++) 
    cin >> a[i];

    int mx = -1;
    for (int i = 0; i <n; i++) 
        if(a[i] <= k) mx = max(a[i], mx);

    cout << mx;
    return 0;
}