#include <bits/stdc++.h>
using namespace std;

void fun(int* &p){
    *p = 100;
    cout << "*p = 100: " << *p << endl;

    // main func value no change
    int y = 200;
    p = &y;
    cout << "in fun: " << (long long int)&p << endl << endl;
}

int main(){
    int x = 10;
    int *p = &x;

    fun(p);
    cout << "in main: " << (long long int)&p << endl;
    cout << "in main: x = " << x << endl;

    return 0;
}
