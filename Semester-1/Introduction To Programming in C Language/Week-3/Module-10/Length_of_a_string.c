#include <stdio.h>
#include <string.h> // len header
int main()
{
    char s[100]; // String initialization
    scanf("%s", &s);

    // Using Loop
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
        count++;
    printf("%d", count);

    // Using built-in method
    printf("%d", strlen(s));

    return 0;
}


