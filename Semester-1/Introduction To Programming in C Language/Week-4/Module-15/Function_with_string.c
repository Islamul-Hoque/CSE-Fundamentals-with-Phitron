#include <stdio.h>

void fun(char s[]){
    printf("%s\n", s);
    printf("%d\n", strlen(s));
}

int main() {
    char s[100];
    scanf("%s", s); // & dileo kaj kore , na dileo kaj kore. karon string ekta array, s = 0 index 

    fun(s);

    return 0;
}