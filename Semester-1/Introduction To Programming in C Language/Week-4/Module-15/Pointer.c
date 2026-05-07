#include <stdio.h> // stack memory

int main()
{
    int x = 3;
    printf("%d\n", x);
    printf("%p\n", &x);

    int *ptr = &x;
    printf("%p\n", ptr);

    // Pointer Address
    printf("%p\n", &ptr);
    return 0;
}