#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, q;
    cin >> n >> m >> q;

    int grid[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> grid[i][j];


    // Prefix sum array (extra row+col for 1-based indexing)
    int pref[n+1][m+1];
    memset(pref, 0, sizeof(pref));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            pref[i][j] = grid[i-1][j-1] 
                       + pref[i-1][j] 
                       + pref[i][j-1] 
                       - pref[i-1][j-1];
        }
    }

    while(q--){
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        // shift to 1-based indexing
        r1++; c1++; r2++; c2++;

        int ans = pref[r2][c2] 
                - pref[r1-1][c2] 
                - pref[r2][c1-1] 
                + pref[r1-1][c1-1];

        cout << ans << endl;
    }

    return 0;
}
