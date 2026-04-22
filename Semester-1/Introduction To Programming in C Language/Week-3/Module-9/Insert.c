#include <stdio.h>

int main()
{
    int n, x, val;
    scanf("%d", &n);

    int a[n+1]; // a[n+1] 
    for (int i=0; i<n; i++){ // i<n
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &x, &val);

    for (int i=n; i>= x+1; i--){ // i<=n
        a[i] = a[i-1];
    }
    a[x] = val;

    for (int i = 0; i <= n; i++){ // i<=n
        printf("%d ", a[i]);
    }
    return 0;
}