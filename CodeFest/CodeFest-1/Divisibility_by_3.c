#include <stdio.h>

int main() {
    int n;  
    scanf("%d", &n);

    char num[n+1];
    scanf("%s", num);

    int digit_sum = 0;
    for (int i = 0; i<n; i++) {
        digit_sum += num[i] - '0'; 
    }

    if (digit_sum % 3 == 0)    printf("YES");
    else printf("NO");

    return 0;
}