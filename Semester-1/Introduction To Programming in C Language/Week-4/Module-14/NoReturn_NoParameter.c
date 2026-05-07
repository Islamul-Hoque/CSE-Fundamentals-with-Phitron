#include <stdio.h>

// void function = no return

void sum() { // no return
    int a, b;
    scanf("%d %d", &a, &b);  // input

    int ans = a+b;
    printf("sum is %d", ans);  
}

int main() { // with paramiter
    sum();
    return 0;
}