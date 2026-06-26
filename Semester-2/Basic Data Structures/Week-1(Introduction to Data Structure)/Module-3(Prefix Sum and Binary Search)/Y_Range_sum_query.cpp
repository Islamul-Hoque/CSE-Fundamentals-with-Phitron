// Brute force approach (O(n*q))
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> v(n+1);

    for (int i = 1; i <=n; i++) 
        cin >> v[i];

    while (q--){   // O(n*q)
        int l, r, sum =0;
        cin >> l >> r;

        for (int i = l; i <=r; i++)
            sum +=v[i];

        cout << sum << endl;
    }
    return 0;
}

// Optimized approach using prefix sum (O(q))
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n+1);

    for (int i = 1; i <=n; i++) 
        cin >> v[i];

    // prefix sum 
    vector<long long int> pre(n+1);
    pre[1] = v[1];

    for (int i = 1; i <=n; i++)   // O(n)
        pre[i] = pre[i-1] + v[i];

    while (q--){      // O(q)
        long long int l, r, sum =0;
        cin >> l >> r;

        if(l == 1) sum = pre[r];
        else sum = pre[r] - pre[l-1];

        cout << sum << endl;
    }
    return 0;
}
