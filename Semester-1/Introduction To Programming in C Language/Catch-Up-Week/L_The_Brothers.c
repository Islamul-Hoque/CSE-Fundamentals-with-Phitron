#include <stdio.h>
#include <string.h>

int main() {
    char f1[1000], s1[1000], f2[1000], s2[1000];
    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);

    if (strcasecmp(s1, s2) == 0) printf("ARE Brothers");
    else printf("NOT");
    return 0;
}

