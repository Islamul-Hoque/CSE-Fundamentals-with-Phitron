#include <stdio.h>

int main() {
    int n, flag=1;
    scanf("%d", &n);
    int a[n];

    for (int  i = 0; i <n; i++) 
        scanf("%d", &a[i]);

    for (int i=0, j=n-1; i<j ; i++, j--) {
        if(a[i] != a[j]) {
            flag=0;
            printf("NO");
            break;
        }
    }
    if(flag == 1) printf("YES"); 

    return 0;
}