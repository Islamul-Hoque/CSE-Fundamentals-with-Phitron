#include <stdio.h>

int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int specific_row, specific_col;
    scanf("%d %d", &specific_row, &specific_col);

    // Printing specific row
    for (int i = 0; i < c; i++)
        printf("%d ", a[specific_row][i]);
        printf("\n");

    // Printin specific col
    for (int i = 0; i < r; i++)
        printf("\n%d", a[i][specific_col]);

    return 0;
}