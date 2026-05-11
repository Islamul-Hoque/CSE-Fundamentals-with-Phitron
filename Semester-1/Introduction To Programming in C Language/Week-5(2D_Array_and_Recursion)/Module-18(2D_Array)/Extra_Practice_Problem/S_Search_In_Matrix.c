#include <stdio.h>

int main()
{
    int r, c, flag = 1;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int x;
    scanf("%d", &x);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] == x) flag = 0;

    if (flag == 1) printf("will take number");
    else printf("will not take number");
    return 0;
}