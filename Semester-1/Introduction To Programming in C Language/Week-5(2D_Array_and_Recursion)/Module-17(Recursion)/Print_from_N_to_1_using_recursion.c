#include <stdio.h>

void count(int i, int n){
    if (i > n) return;

    count(i + 1, n);
    printf("%d\n", i);
}

int main(){
    int n;
    scanf("%d", &n);

    count(1, n);
    return 0;
}