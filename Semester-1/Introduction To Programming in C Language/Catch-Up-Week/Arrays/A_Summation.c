#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    long long int sum = 0;
    for (int i = 0; i <n; i++) {
        long long int x;
        scanf("%lld", &x);

        sum += x;
    }

    printf("%lld", abs(sum));

    return 0;
}