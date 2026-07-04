#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5] = {10, 20, 30, 40, 50};
    vector<int> v = {10, 20, 30, 40, 50};
    v.push_back(100);

    cout << (long long int)&a[2] << " " << (long long int)&a[3] << endl; 

    cout << (long long int)&v[2] << " " << (long long int)&v[3] << endl; 
    cout << (long long int)&v[4] << " " << (long long int)&v[5] << endl; 

    return 0;
}