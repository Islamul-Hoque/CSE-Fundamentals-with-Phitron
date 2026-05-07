#include <stdio.h>
int x = 20; // global variable

int sum(){
    int y = 20; // local variable
    printf("x sum: %d\n", x);
    printf("y sum: %d\n", y);
}

int main(){
    int i;
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n%d \n", i); //garbage value (random number) 

    printf("x main: %d\n", x);
    sum();
    return 0;
}