#include <stdio.h>

void count(int i, int n){
    if (i > n) return; // condition 

    printf("%d\n", i);
    count(i + 1, n); // increment
}

int main(){
    int n;
    scanf("%d", &n);

    count(1, n); // initialization
    return 0;
}