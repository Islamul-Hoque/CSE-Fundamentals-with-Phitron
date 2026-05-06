#include <stdio.h>

int sub(int num1, int num2){
    int ans = num1 - num2;
    return ans;
}

int sum(int num1, int num2){
    int ans = num1 + num2;
    return ans;
}

int main(){
    // sum
    int sum1 = sum(10, 20);
    int sum2 = sum(7, 15);
    printf("sum: %d %d\n", sum1, sum2);

    // sub
    int sub1 = sub(15, 5);
    int sub2 = sub(5, 6);
    printf("sub: %d %d\n", sub1, sub2);

    // user input
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int userInput = sum(num1, num2);
    printf("Your sum is: %d", userInput);

    return 0;
}