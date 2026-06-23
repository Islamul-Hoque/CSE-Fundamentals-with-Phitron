#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;    // o(1)
    cin >> n; // o(1)

    for (int  i = 1; i <=n; i++)  //  o(n) ==> o(n)

    for (int  i = 1; i <=n - 5; i++)  //  o(n-constant) ==> o(n)
    for (int  i = 1; i <=n + 5; i++)

    for (int  i = 1; i <=2*n; i++)  //  o(2*n) ==> o(n)
    for (int  i = 1; i <=n/2; i++)  //  o(n/2) ==> o(n)

    for (int  i = 1; i <=n/2; i +=2) //  o(n/2) ==> o(n)

        cout << i << endl;

    return 0;  // o(1)
}

/*
--------------------------------------------------------------------
                Total time complexity = o(5n+3) ==> o(n)
*/
