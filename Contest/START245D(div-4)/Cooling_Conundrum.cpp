#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, s = 0;
        cin >> x >> y;

        for (int i = x; i > y; i--)
            s += ceil(i / 10.0);

        cout << s << endl;
    }

    return 0;
}