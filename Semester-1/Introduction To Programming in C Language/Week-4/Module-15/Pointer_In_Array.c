#include <stdio.h>

int main(){
    int a[5] = {10, 20, 30, 40, 50};

    // Array name
    printf("%d\n", *a); // index 0 er value => array dereference
    printf("0 index before dereference: %d\n", a[0]);

    // index 0 dereference
    *a = 100;
    printf("0 index after dereference: %d\n\n", a[0]);

    // index 1 dereference
    printf("0 index before dereference: %d\n", a[1]);
    *(a + 1) = 200;
    printf("0 index after dereference: %d\n\n", a[1]);

    printf("%p\n", a); // array er name / array nijeo ekta pointer

    // index
    printf("%p\n\n", &a[0]);

    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
    printf("%p\n", &a[3]);
    printf("%p\n", &a[4]);
    printf("%p\n\n", &a[5]);

    return 0;
}