// Q-1
#include <stdio.h>

int main() {
    for(int i=1; i<=3; i++) { // Outer loop(i): 1 থেকে 3 পর্যন্ত চলবে।
    for(int j=1; j<=i; j++) { // Inner loop(j): প্রতিবার j 1 থেকে i পর্যন্ত চলবে।
        printf("%d ", j);
    }
}

    return 0;
}


// Q-2
#include <stdio.h>

int main() {
    for(int i=1; i<=4; i++) {
    for(int j=1; j<=i; j++) {
        printf("*");
        // printf("*\n");
    }
}

    return 0;
}



// Q-3
#include <stdio.h>

int main() {
    for(int i=1; i<=3; i++) {
    for(int j=1; j<=3; j++) {
        printf("%d ", i);
    }
}

    return 0;
}




// Q-5
#include <stdio.h>

int main() {
    for(int i=1; i<=5; i+=2) {  // 1,3,5
    for(int j=1; j<=i; j++) {
        printf("*");
    }
    printf("\n"); // 1*,3*,5* = 3line
}

    return 0;
}


// Q-6
#include <stdio.h>

int main() {
    int num = 1;
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= i; j++) {
        printf("%d ", num++); 
    }
    printf("\n");
}

    return 0;
}



// Q-7
#include <stdio.h>

int main() {
    for(int i=3; i>=1; i--) {
    for(int j=1; j<=i; j++) {
        printf("*");
    }
    printf(" ");
}

    return 0;
}