#include <stdio.h>

void hello(){ // recursive function
    printf("hello\n");
    hello();  // infinity loop => stack overflow
}

int main() {
    printf("Hi\n");

    hello();
    return 0;
}