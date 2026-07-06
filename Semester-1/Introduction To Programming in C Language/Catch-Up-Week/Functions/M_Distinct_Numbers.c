#include <stdio.h>
#include <stdbool.h>

void Distinct_Numbers(int a[], int n){
    int count = 0;

    for (int i = 0; i <n; i++){

        bool is_Unique = true;
        for (int j = i+1; j <n; j++){
            if(a[i] == a[j]){
                is_Unique = false;
                break;
            }
        }
        if(is_Unique == true) count++;
    }
    printf("%d", count);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i <n; i++)
        scanf("%d", &a[i]);

    Distinct_Numbers(a, n);

    return 0;
}