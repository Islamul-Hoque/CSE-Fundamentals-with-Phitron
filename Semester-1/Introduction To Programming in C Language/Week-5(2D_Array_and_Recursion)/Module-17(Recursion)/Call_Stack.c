#include <stdio.h>

void third() {
    printf("Inside third()\n\n");
}

void second() {
    printf("Inside second()\n");
    third();
    printf("Back to second()...\n");
}

void first() {
    printf("Inside first()\n\n");
    second();
    printf("Back to first()..\n");
}

int main() {
    printf("Start of main()\n");
    first();
    printf("Back to main().\n");
    return 0;
}
