#include <stdio.h>
#include <limits.h>
int main() {
    int n, max = INT_MIN;
    scanf("%d", &n);

    for (int i = 0; i <=n; i++)
    {
        int value;
        scanf("%d", &value);

        if(value > max) max = value;
    }
    printf("%d", max);

    return 0;
}