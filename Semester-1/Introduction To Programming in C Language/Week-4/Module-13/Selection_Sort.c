// Ascending order
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++){ // i<n-1 or i<n
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) { // not oky = swap(Ascending order)
            // if (a[i] < a[j]){ // not oky = swap(Descending order)
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}