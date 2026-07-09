#include <stdio.h>
#include <limits.h>

int main(){
    int t;
    scanf("%d", &t);

    while (t--){
        int n;
        scanf("%d", &n);

        int a[n+1];
        for (int i = 1; i <=n; i++)
            scanf("%d", &a[i]);

        int mn = INT_MAX;

        for (int i = 1; i<=n; i++){
            for (int j=i+1; j<=n; j++){
                if(a[i]+a[j]+j-i < mn)
                    mn = a[i]+a[j]+j-i;
            }
        }
        printf("%d\n", mn);
    }

    return 0;
}