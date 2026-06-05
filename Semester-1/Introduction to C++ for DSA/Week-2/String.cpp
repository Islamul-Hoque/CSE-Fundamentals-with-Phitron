#include <bits/stdc++.h>
using namespace std;

int main(){
    // manual value change 
    char s[10] = "Hello";
    strcpy(s, "gelo");

    // build-in value change 
    string s2= "hello";
    s2 = "hi";
    cout << s << endl << s2 << endl;

    // manual compare
    char s3[10] = "Hello";
    char s4[10] = "Hello";
    if(strcmp(s3, s4) == 0) cout << "Same" << endl;
    else cout << "Not same" << endl;

    // build-in
    string x = "Hello";
    string y = "Hello bro";
    if(x ==y) cout << "Same" << endl;
    else cout << "Not same" << endl;

    return 0;
}