#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i <n; i++) scanf("%d", &a[i]);

    int missing = 0;
    for (int i = 0; i <n; i++){
        if(a[i] == missing ) missing++;
        else if (a[i] > missing) break;
    }

    printf("%d", missing);

    return 0;
}