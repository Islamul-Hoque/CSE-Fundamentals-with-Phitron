// Q-1
#include <stdio.h>

void gello() {
    printf("Gello ");
}

void hello() {
    gello();
    printf("Hello ");
}

int main() {
    printf("Main ");
    hello();
    return 0;
}


// Q-2
#include <stdio.h>

void fun() {
    printf("fun\n");
    fun();   // আবার নিজেকে কল করছে => Infinite Recursion
}

int main() {
    fun();
    return 0;
}


// Q-3
#include <stdio.h>

void fun() {
    printf("fun\n");
}

int main() {
    fun();
    return 0;
}


// Q-4
#include <stdio.h>

void f2(){
    printf("f1 ");
}

void f1(){
    printf("f2 ");
    f2();
}

int main(){
    printf("Main ");
    f1();
    return 0;
}
