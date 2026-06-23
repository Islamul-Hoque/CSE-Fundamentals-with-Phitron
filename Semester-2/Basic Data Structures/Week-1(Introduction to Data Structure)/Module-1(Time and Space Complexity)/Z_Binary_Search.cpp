#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int  i = 0; i <n; i++)
        cin >> a[i];

    while (q--) {
        int x, flag=0;
        cin >> x;

        for (int i = 0; i < n; i++) {
            if(a[i] == x) {
                flag =1;
            }
        }
        if(flag == 1) cout << "found" << endl;
        else cout << "not found" << endl;
    }

    return 0;
}

// Time limit exceeded ===> TLE 