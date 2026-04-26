#include <stdio.h>

int main() {
    long long int N, M, sum = 0;
    scanf("%lld %lld", &N, &M);

    sum = N%10 + M%10;

    printf("%lld", sum);
    return 0;
}
