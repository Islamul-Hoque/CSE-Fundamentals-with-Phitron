#include <stdio.h>

void Swap(int *x, int *y){

    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    Swap(&x, &y);

    printf("%d %d", x, y);
    return 0;
}