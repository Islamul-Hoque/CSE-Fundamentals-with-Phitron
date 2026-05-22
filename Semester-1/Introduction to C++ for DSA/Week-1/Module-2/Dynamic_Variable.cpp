#include <bits/stdc++.h>
using namespace std;

int *p;
void fun(){
    int x =10;
    p = &x;
    cout << "Fun func:" << *p << endl;
    return;
}


int main() {
    int x = 10;
    int *p1 = new int;
    *p1 = 100;
    cout << *p1 << endl;

    fun();
    cout << "main func:" << *p << endl;

    return 0;
}