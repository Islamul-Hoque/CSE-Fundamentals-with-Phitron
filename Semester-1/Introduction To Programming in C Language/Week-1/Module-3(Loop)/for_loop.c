// print string
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d ISHFAK\n", i);
    }
    return 0;
}

// Print 1 to n
#include <stdio.h>
int main(){
    int n, s = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        s = s = i;
        printf("%d\n", s);
    }
    return 0;
}