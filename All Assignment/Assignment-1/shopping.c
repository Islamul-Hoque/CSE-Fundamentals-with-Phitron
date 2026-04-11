// If you buy a punjabi print "I will buy Punjabi".
// If you buy a pair of shoes print "I will buy new shoes"
// If Alisa buy a pair of shoes print "Alisa will buy new shoes"
// If no one can buy anything print "Bad luck!"

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if(N > 1000){
        printf("I will buy Punjabi\n");
        if( N - 1000 >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    } else {
            printf("Bad luck!");
        }
    return 0;
}