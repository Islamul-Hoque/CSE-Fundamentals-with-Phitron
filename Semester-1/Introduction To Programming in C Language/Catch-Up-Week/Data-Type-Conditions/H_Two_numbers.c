#include <stdio.h>
#include <math.h>

int main() {
    double a, b, div = 0;
    scanf("%lf %lf", &a, &b);
    div = a/b;

    printf("floor %.0lf / %.0lf = %.0lf\n", a, b, floor(div));
    printf("ceil %.0lf / %.0lf = %.0lf\n", a, b, ceil(div));
    printf("round %.0lf / %.0lf = %.0lf\n", a, b, round(div));
    return 0;
}