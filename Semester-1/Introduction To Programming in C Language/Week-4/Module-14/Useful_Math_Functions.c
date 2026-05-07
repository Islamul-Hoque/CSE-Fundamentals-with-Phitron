#include <stdio.h>
#include <math.h>

int main()
{
    double n = 5.3;
    printf("Original number: %.2f\n", n);
    printf("Ceil value     : %.0f\n", ceil(n));
    printf("Floor value    : %.0f\n", floor(n));

    printf("Round value    : %.0f\n\n", round(n)); // 5

    double m = 5.5;
    printf("Original number: %.2f\n", m);
    printf("Round value    : %.0f\n\n", round(m)); // 6

    double p = 64.5;
    printf("Number: %.2lf\n", p);
    printf("Square root of %.2lf = %.2lf\n\n", p, sqrt(p));

    printf("Result of pow is = %.0f\n\n", pow(2, 3));

    printf("abs(-10) = %d\n", abs(-10));
    printf("abs(10)  = %d\n", abs(10));
    printf("abs(0)   = %d\n", abs(0));
    return 0;
}
