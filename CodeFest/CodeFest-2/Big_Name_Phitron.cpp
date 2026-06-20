#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    int count=0;
    while (ss >> word){
        // convert lowercase
        for(char &c : word){
            c = tolower(c);
        }

        // only word
        string newWord = "";
        for(char c : word){
            // if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) newWord += c;
            if(isalpha(c)) newWord += c;
        }

        if(newWord == "phitron") count++;
    }
    cout << count;

    return 0;
}