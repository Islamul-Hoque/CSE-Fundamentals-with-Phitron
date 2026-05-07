#include <stdio.h>

// void = function konokichu return korbe na

void sum(int a, int b){ // with paramiter
    int ans = a+b;
    printf("sum is %d", ans);  // no return

}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // input
    sum(a,b);

    return 0;
}