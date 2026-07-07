#include <stdio.h>
#include <string.h>

int main() {
    char s[1000001];
    scanf("%s", &s);

    int len = strlen(s);

    int sum = 0;
    for (int i = 0; i <len; i++) {
        // way-1
        sum +=s[i] - '0';   

        // Way-2
        sum +=s[i] - 48;   
    }

    printf("%d", sum);

    return 0;
}