#include <stdio.h>

void reversed_order(int i, int n){
    if(i > n) return;

    reversed_order(i+1, n);
    printf("%d", i);
    if(i != 1) printf(" ");
}

int main() {
    int n;
    scanf("%d", &n);

    reversed_order(1, n);
    return 0;
}