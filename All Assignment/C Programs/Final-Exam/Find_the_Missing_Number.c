#include <stdio.h>

int main() {
    long long int t;
    scanf("%lld", &t);

    while(t--){
        long long int mul, a,b,c;
        scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);
        long long int ans = a*b*c;

        if(mul % ans == 0){
            printf("%lld\n", mul/ans);
        } else{
            printf("-1\n");
        }
    }

    return 0;
}