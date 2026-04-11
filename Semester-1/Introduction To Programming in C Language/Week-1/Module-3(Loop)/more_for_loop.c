#include <stdio.h>
int main(){
    // for(int i = 1; i <= 10; i++){
    // for(int i = 1; i <= 10; i+=2){ // odd
    // for(int i = 2; i <= 10; i+=2){ // even
    // for(int i = 4; i <= 20; i+=4){ // 4 er gunitok(4, 8, 12,16,10)
    // for(int i = 10; i >= 1; i--){ // 10 to 1 decrease
    // for(int i = 10; i >= 1; i-=2){ // 10 to 1 even decrease
    
    for(int i = 2; i <= 64; i = i*2){ // 2 to 64 
        printf("%d\n", i);
    }
    return 0;
}