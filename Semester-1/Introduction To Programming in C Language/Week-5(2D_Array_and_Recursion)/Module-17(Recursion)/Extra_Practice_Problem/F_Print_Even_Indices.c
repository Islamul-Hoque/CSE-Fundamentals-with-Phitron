// Print numbers in even indices in a reversed order separated by spaces.
#include <stdio.h>

void even_indices(int a[], int n, int i){
    if(i == n) return;

    even_indices(a, n, i+1);
    if (i % 2 == 0){          // even indices = 0,2,4.. index number
        printf("%d ", a[i]);  // numbers in even indices = even indices er value
    }                         // Reversed order => tai even_indices() er pore print diyechi 
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i <n; i++) {
        scanf("%d", &a[i]);
    }

    even_indices(a, n, 0);
    return 0;
}