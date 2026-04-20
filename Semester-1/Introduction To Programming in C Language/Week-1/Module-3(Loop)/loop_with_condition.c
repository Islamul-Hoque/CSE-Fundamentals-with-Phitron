#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i %2 == 0 ){
            printf("\tEven number is: %d\n", i);
        } else {
            printf("Odd number is: %d\n", i);
        }
    }

    return 0;
}