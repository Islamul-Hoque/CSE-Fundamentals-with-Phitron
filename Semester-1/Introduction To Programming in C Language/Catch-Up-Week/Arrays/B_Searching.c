#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);

    long long int a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    long long int x, idx = -1;
    scanf("%lld", &x);

    for (int i = 0; i < n; i++){
        if(x == a[i]){
            idx = i;
            break;
        } 
    }

    printf("%lld", idx);

    return 0;
}