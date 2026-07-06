#include <stdio.h>

void sum(){
    long long int x, y;
    scanf("%lld %lld", &x, &y);

    long long int sum = x+y;
    printf("%lld", sum);
}

int main() {
    sum();

    return 0;
}