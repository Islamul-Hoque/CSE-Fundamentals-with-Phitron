#include <stdio.h>

int main() {
    int pass;

    for( ; scanf("%d", &pass) ; )
    // while (scanf("%d", &pass) != EOF ) 
    // while (scanf("%d", &pass))  // End Of File
    {
        if(pass == 1999){
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }
    return 0;
}