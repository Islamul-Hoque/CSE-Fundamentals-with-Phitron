#include <stdio.h>

int main() {
    int s1, e1, s2, e2;
    scanf("%d %d %d %d", &s1, &e1, &s2, &e2);

    if(s2 >= s1 && s2 <= e1 ) {
        if(e1 < e2) printf("%d %d", s2, e1);
        else printf("%d %d", s2, e2);
    }
    else if(s2 <= s1 && e2 >= s1){
        if(e1 < e2) printf("%d %d", s1, e1);
        else printf("%d %d", s1, e2);
    } else printf("-1");

    return 0;
}



