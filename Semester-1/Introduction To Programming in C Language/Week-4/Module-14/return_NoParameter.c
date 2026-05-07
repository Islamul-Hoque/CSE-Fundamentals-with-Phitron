#include <stdio.h>


int sum(){ // without parameter
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int ans = num1 + num2;
    return ans; // return
}

int main(){
    int result = sum(); // without parameter
    printf("Your sum is: %d", result);

    return 0;
}
