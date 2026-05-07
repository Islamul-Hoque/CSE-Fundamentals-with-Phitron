#include <stdio.h>

void fun(int *p){
    *p = 20; // Dereference => address e giye valuce chage kore deoya
    printf("Fun : %d\n", *p);
}

int main(){
    int x = 10;
    fun(&x); // Pass by reference
    printf("Main : %d ", x);

    return 0;
}