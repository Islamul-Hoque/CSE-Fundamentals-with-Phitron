#include <stdio.h>

int main()
{
    int i;
    long long int ll;
    char c;
    float f;
    double d;

    scanf("%d %lld %c %f %lf", &i, &ll, &c, &f, &d);

    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n", i, ll, c, f, d);
    return 0;
}
