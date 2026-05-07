#include <stdio.h>

void fun(int x) {
    printf("Fun : %d\n", x); // only value pass hocche
    x = 20;
    printf("Fun : %d\n", x);
}

int main(){
    int x = 10;
    fun(x);  // Pass by value
    printf("%d ", x);

    return 0;
}