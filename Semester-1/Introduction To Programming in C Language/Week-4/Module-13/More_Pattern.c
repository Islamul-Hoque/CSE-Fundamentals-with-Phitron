// inverted star
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n;

    for (int i = 1; i <= n; i++) { // for printing line
        for (int j = 1; j <= star; j++) { // for printing star
            printf("*");
        }
        printf("\n");
        star--;
    }

    return 0;
}

// others
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;

    for (int i = 1; i <= n; i++) { // for printing line
        for (int k = 1; k <= space; k++){ // for printing space
            printf(" ");
        }

        for (int j = 1; j <= star; j++) { // for printing star
            // printf("%d", j); // Number Pattern (without space)
            printf("%d ", j); // Pyramid Number Pattern (with space)
        }

        printf("\n");
        star += 1;
        space--;
    }

    return 0;
}
