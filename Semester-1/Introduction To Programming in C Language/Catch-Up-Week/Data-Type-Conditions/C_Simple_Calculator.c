#include <stdio.h>

int main() {
    int X, Y, sum, sub;
    long long int mul;
    scanf("%d %d", &X, &Y);
    sum = X + Y;
    mul = (long long)X * Y;
    sub = X - Y;

    printf("%d + %d = %d\n",X, Y, sum);
    printf("%d * %d = %lld\n",X, Y, mul);
    printf("%d - %d = %d\n",X, Y, sub);
    return 0;
}