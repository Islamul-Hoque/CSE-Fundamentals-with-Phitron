#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // manually string copy 
    int length = strlen(b);
    for (int i = 0; i <=length; i++) a[i] = b[i]; // null soho print korte hobe.

    // build-in strcpy() function
    strcpy(a, b);
    printf("%s %s", a, b);
    return 0;
}

