#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001], s2[1001];
    scanf("%s", s1);
    scanf("%s", s2);
    int len2 =strlen(s2);

    int  start, end;
    scanf("%d %d", &start, &end);

    if (start < 0) start = 0;
    if (end >= len2) end = len2 - 1;

    printf("%s", s1);

    if(start <=end) 
        for (int i=start; i <=end; i++) printf("%c", s2[i]);

    return 0;
}