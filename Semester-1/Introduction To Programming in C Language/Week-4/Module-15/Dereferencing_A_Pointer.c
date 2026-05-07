// Dereferencing a pointer
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x); // taking input by referencing variable address

    printf("%d\n", x);
    printf("%p\n\n", &x);

    int *p = &x; // Pointer referencing x
    *p = 200;    // Dereferencing: update value via pointer
    printf("%d\n", x);   // 200
    printf("%d\n", *p);  // 200
    printf("%p\n", &p);

    return 0;
}
