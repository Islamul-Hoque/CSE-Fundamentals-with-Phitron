#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    cout << s << endl;

    // string কে word-by-word read kora
    stringstream ss(s);
    string word;  // main string ke word e assign korechi
    while(ss >> word)// main string theke word niye oi word ta main string theke remove kore dibe.
        cout << word << endl;

    return 0;
}