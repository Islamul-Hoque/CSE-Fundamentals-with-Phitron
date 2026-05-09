#include <stdio.h>

void count(int i){
    if (i == 0) return; // condition 

    printf("%d\n", i);
    count(i - 1); // increment
}

int main(){
    int n;
    scanf("%d", &n);

    count(n); // initialization
    return 0;
}