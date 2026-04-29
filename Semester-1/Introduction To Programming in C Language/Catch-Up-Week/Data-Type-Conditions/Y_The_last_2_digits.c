#include <stdio.h>

int main() {
    long long int a, b, c, d, result = 1;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    result = (a % 100) * (b%100) * (c%100) * (d%100);
    printf("%.2lld", result % 100);

    return 0;
}

