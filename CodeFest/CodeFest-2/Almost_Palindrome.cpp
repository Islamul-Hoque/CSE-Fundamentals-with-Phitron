// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while (t--){
//         string s;
//         cin >> s;

//         int len = s.size()-1;
//         int add = len;

//         for (int i = 0, j=len; i <j; i++, j--){
//             if(s[i] != s[j]){
//                 add = i;
//                 s[i] = s[j];
//             }
//         }
//     cout << add << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int i = 0, j = s.size()-1;
    while(i < j){
        if(s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int len = s.size();
        int ans = len; // worst case: সবগুলো add করতে হবে

        for(int i = 0; i < len; i++){
            string sub = s.substr(i); // suffix
            if(isPalindrome(sub)){
                ans = i; // i characters add করতে হবে
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
