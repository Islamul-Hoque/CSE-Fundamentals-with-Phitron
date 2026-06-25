#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m ;
    cin >> n >> m;

    // Way-1
    vector<int> v(n);
    cout << "Way-1: ";
    for(int i =0; i<n; i++) 
        cin >> v[i];

    for(int x : v) cout << x << " ";
    cout << endl;

    // Way-2
    cout << "Way-2: ";
    vector<int> v2;
    for(int i =0; i<m; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for(int x : v2) cout << x << " ";

    return 0;
}