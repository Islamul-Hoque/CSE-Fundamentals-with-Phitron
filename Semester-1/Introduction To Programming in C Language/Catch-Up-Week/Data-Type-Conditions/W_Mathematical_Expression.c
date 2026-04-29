// Way-1
#include <stdio.h>

int main() {
    long long int a, b, result;
    char sign, equal;
    scanf("%lld %c %lld %c %lld", &a, &sign, &b, &equal, &result);

    if(sign == '+') {
        if( a + b == result){
            printf("Yes\n");
        } else printf("%lld\n", a + b);
    }
    else if (sign == '-') {
        if( a - b == result){
            printf("Yes\n");
        } else printf("%lld\n", a-b);
    }
    else if (sign == '*') {
        if( a * b == result){
            printf("Yes\n");
        } else printf("%lld\n", a*b);
    }
    return 0;
}


// Way-2
#include <stdio.h>

int main() {
    long long int a, b, c, ans = 0;
    char sign, equal;
    scanf("%lld %c %lld %c %lld", &a, &sign, &b, &equal, &c);

    if(sign == '+') ans = a+b;
    else if (sign == '-') ans = a-b;
    else if (sign == '*') ans = a*b;

    if (ans == c) printf("Yes");
    else printf("%lld", ans);

    return 0;
}