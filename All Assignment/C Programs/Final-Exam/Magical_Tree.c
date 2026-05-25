#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total_Line = 5 + (n + 1) / 2;
    int space=total_Line-1, star=1;

    for (int i = 1; i <=total_Line; i++) {  // for printing line
        for (int k = 1; k <=space; k++)  printf(" ");  // for printing space
        for (int j = 1; j <=star; j++) printf("*");    // for printing space

        space--;
        star+=2;
        printf("\n");
    }

    for (int i = 0; i <5; i++) {    // for printing line
        for (int k = 0; k <5; k++) printf(" ");    // for printing space
        for (int j = 1; j <=n; j++)  printf("*");  // for printing star

        printf("\n");
    }

    return 0;
}


// For Ster
// n=1-> 6 line
// n=3-> 7 line
// n=5-> 8line

// n=2 barle => 1ta kore line barteche


// for trunk
// space = 5 ta
// line = 5 ta
// star = n er man 