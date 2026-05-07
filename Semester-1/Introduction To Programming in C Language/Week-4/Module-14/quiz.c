// Q-1
#include <stdio.h>

void m(){
    printf("hi");
}

int main(){
    m();
    return 0;
}


// Q-2
#include <stdio.h>

void m(){
    printf("hi ");
}

int main(){
    printf("hello ");
    return 0;
}


// Q-3
#include <stdio.h>

// ___ sum(){  // void hobe
void sum(){  
    int a = 10, b = 10;
    printf("%d", a + b);
}

int main(){
    sum();
    return 0;
}


// Q-4
#include <stdio.h>

int sum(int x, int y){
    int res = x + y;
    return res;
}

int main(){
    sum(5, 6);
    return 0;
}


// Q-5
#include <stdio.h>

int sum(int x, int y){
    int res = x + y;
    return res;
}

int main(){
    printf("%d", sum(5, 6));
    return 0;
}

