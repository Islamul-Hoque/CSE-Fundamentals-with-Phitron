#include <stdio.h>

int main() {
    int x = 10, y, z; 
    y = x++; 
    z = ++y; 

    printf("%d", z ++);
    return 0;
}