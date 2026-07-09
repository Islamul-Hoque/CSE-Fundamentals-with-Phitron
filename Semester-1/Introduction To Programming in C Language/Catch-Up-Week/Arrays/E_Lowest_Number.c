#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n], mn = INT_MAX, idx;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);

        if(a[i] < mn) {
            mn = a[i]; 
            idx = i+1;
        }
    }
    printf("%d %d", mn, idx);

    return 0;
}