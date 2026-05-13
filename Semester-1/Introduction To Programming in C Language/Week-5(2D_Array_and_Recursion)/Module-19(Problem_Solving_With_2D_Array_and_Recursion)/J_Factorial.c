#include <stdio.h>

long long int factorial(int n){
    if(n == 1) return 1;  // base case

    long long int mul = factorial(n-1);
    return n*mul;
}

int main() {
    int n;
    scanf("%d", &n);

    long long int ans = factorial(n);
    printf("%d", ans);
    return 0;
}
