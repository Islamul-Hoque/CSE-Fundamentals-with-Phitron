#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n], flag = 1;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int mn = INT_MAX, mn_idx;
    int mx = INT_MIN, mx_idx;

    for (int i = 0; i < n; i++){
        if(a[i] < mn) {
            mn = a[i];
            mn_idx = i;
        }
        if(a[i] > mx) {
            mx =a[i];
            mx_idx = i;
        }
    }

    a[mn_idx] = mx;
    a[mx_idx] = mn;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


