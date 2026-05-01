#include <stdio.h>
#include <math.h>

int main() {
    int n, isPrime=1;
    scanf("%d", &n);

    for( int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}