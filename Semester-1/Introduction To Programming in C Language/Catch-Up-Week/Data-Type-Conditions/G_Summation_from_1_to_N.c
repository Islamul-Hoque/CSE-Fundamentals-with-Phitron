#include <stdio.h>

int main() {
    long long int N, sum =0;
    scanf("%lld", &N);
    sum = N*(N+1)/2;

    printf("%lld", sum);
    return 0;
}
