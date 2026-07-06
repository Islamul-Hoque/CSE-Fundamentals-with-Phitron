#include <stdio.h>

void Average(double a[], int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    printf("%.7lf", sum/n);
}

int main(){
    int n;
    scanf("%d", &n);
    double a[n];

    for (int i = 0; i < n; i++)
        scanf("%lf", &a[i]);

    Average(a, n);

    return 0;
}