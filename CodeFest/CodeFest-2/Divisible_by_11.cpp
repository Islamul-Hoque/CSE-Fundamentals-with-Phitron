#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long int oddSum=0, evenSum=0;
    int len = s.size();

    for(int i=0; i<len; i++){
        int digit = s[len-1-i] - '0';

        if(i%2==0) oddSum +=digit;
        else evenSum +=digit;
    }

    long long int diff = abs(oddSum - evenSum);
    if(diff % 11==0) cout << "YES";
    else cout << "NO";

    return 0;
}
