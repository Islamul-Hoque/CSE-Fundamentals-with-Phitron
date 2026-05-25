#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int space=n-1, value = 1;
    for (int i = 1; i <=n; i++) { // line print
        for (int k = 1; k <=space; k++) {  // space print
            printf(" ");
        }
            for (int j = value; j>0; j--) {  // number print (reverse order)
            printf("%d", j);
            }

        space--;
        value++;
        printf("\n");
    }

    return 0;
}