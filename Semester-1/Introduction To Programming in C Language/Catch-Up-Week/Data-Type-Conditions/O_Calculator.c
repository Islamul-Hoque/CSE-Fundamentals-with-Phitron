#include <stdio.h>

int main() {
    int x, y, sum = 0, sub = 0, mul = 0, div = 0;
    char o;
    scanf("%d %c %d", &x, &o, &y);

    sum = x + y;
    sub = x -y;
    mul = x * y;
    div = x / y;

    if (o == '+') printf("%d", sum);
    if (o == '-') printf("%d", sub);
    if (o == '*') printf("%d", mul);
    if (o == '/') printf("%d", div);

    return 0;
}


