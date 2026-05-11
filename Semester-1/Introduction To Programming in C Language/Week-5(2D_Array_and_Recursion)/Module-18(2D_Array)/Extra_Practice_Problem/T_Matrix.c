#include <stdio.h>
#include <math.h>

int main(){
    int n, primary_sum=0, secondary_sum=0;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            if(i==j) primary_sum += a[i][j];
            if(i+j == n-1) secondary_sum +=a[i][j];
        }

    printf("%d", abs(primary_sum-secondary_sum));
    return 0;
}