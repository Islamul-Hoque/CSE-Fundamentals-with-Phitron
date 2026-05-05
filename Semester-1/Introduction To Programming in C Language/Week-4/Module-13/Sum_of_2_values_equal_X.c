#include <stdio.h>

int main() {
    int n, x, flag = 0;
    scanf("%d", &n); // input array size
    int a[n];

    for (int i = 0; i < n; i++) { // input array
        scanf("%d", &a[i]);
    }
    scanf("%d", &x); // input sum

    for (int i = 0; i < n - 1; i++) { // i
        for (int j = i + 1; j < n; j++) { // j
            if (a[i] + a[j] == x) { // i+j
                flag = 1;
                printf("Yes %d %d\n", a[i], a[j]);
            }
        }
    }
    if (flag == 0)
        printf("No\n");

    return 0;
}

