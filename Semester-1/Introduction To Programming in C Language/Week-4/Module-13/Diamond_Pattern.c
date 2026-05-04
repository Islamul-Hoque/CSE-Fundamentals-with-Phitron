#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int star = 1, space = n - 1;

    // Upper pyramid
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= space; k++) {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    // Lower inverted pyramid
    star = 2 * n - 3;
    space = 1;

    for (int i = 1; i <= n - 1; i++) {
        for (int k = 1; k <= space; k++) {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }

    return 0;
}
