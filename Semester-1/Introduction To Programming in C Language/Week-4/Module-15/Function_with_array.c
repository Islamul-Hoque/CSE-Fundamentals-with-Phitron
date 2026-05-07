// Variable => pass by value
#include <stdio.h>

void fun(int a[]){
    printf("Fun : %p\n", a);
    a[1] = 200; // modify array
}

void fun2(int b[], int n){ 
    for (int i = 0; i < n; i++){
        printf("\n%d ", b[i]); // value print
    }
}

int main(){
    int a[5] = {10, 20, 30, 40, 50};
    fun(a); // Array => pass by reference
    printf("main: %p\n", a);

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    // input array
    int n;
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    fun2(b, n);
    return 0;
}