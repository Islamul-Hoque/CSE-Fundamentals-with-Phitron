#include <stdio.h>

int main() {
    int n, counter = 1;
    scanf("%d", &n);

    int hash = 1, space = n - 1;
    for (int i = 1; i <= n; i++)  { 
        for (int k = 1; k <= space; k++) { // for printing space
            printf(" ");
        }
        for (int j = 1; j <= hash; j++)  { // for printing hash
            if (counter % 2 ==1) {
                printf("#");
            } else printf("-");
        }

        hash += 2;
        space--;
        counter++;
        printf("\n");
    }

    int hashDown = 2 * n - 3, spaceDown = 1;
    for (int i = 1; i <= n-1; i++) { // for printing line
        for (int k = 1; k <= spaceDown; k++) { // for printing space
            printf(" ");
        }
        for (int j = 1; j <= hashDown; j++) { // for printing hash
            if (counter % 2 ==1) {
                printf("#");
            } else printf("-");
        }

        hashDown-=2;
        spaceDown++;
        counter++;
        printf("\n");
    }

    return 0;
}