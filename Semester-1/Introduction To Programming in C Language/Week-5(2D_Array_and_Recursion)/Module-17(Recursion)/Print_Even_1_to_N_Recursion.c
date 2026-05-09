#include <stdio.h>

void count(int i, int n){
    if (i > n) return; 

    if (i % 2 == 0) printf("%d\n", i);
    count(i + 1, n); 
}

int main(){
    int n;
    scanf("%d", &n);

    count(1, n); 
    return 0;
}
