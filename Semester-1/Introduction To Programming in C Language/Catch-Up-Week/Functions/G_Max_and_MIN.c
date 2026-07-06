// #include <stdio.h>
// #include <limits.h>

// void Max_MIN(int a[], int n, int *mn, int *mx){
//     *mn = INT_MAX;
//     *mx = INT_MIN;

//     for (int i = 0; i <n; i++){
//         if(a[i] <= *mn) *mn = a[i];
//         if(a[i] >= *mx) *mx = a[i];
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     int a[n];
//     for (int i = 0; i <n; i++)
//     scanf("%d", &a[i]);

//     int mn, mx;
//     Max_MIN(a, n, &mn, &mx);

//     printf("%d %d", mn, mx);
//     return 0;
// }