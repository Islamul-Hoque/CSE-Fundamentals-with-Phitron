#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;

    for (int i = 1; i <= n; i++) { // for printing line
        for (int k = 1; k <= space; k++){ // for printing space
            printf(" ");
        }

        for (int j = 1; j <= star; j++) { // for printing star
            printf("*");
        }

        printf("\n");
        star+= 2;
        space--;
    }

    return 0;
}

// inverted pyramid
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 2 * n - 1, space = 0;

    for (int i = 1; i <= n; i++) { // for printing line
        for (int k = 1; k <= space; k++) { // for printing space
            printf(" ");
        }

        for (int j = 1; j <= star; j++) { // for printing star
            printf("*");
        }

        printf("\n");
        star -= 2;
        space++;
    }

    return 0;
}



// star = 2 * n - 1 => 
// 1st line → 1 star
// 2nd line → 3 star
// 3rd line → 5 star 