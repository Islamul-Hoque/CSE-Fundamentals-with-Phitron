#include <stdio.h>
int main() {
    int A;
    long long int B;
    float C;
    char D;

    scanf("%d %lld %f %c", &A, &B, &C, &D);

    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.2f\n", C);
    printf("%c\n", D);
    return 0;
}