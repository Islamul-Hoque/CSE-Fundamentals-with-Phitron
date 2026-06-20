#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x=0, y=0;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i <n; i++)
        cin >> a[i];

    int myHeight = a[k-1];
    for (int i = 0; i <n; i++){
        if(i < k-1 && a[i] > myHeight) x++;  // amar view block korteche
        if(i > k-1 && a[i] < myHeight) y++;
    }

    cout << x << " " << y;

    return 0;
}

// i < k-1 → মানে হলো তোমার position এর আগে যারা আছে।
// i > k-1 → মানে হলো তোমার position এর পরে যারা আছে।