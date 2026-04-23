// #include <stdio.h>

// int main() {
//     int n, m;
//     scanf("%d", &n);

//     int a[n]; 
//     for (int i = 0; i < n; i++) {  // input 1st array
//         scanf("%d", &a[i]);
//     }

//     scanf("%d", &m);
//     int b[m];
//     for (int i = 0; i < m; i++) {  // input 2nd array
//         scanf("%d", &b[i]);
//     }

//     int c[n+m];
//     for (int i = 0; i < n; i++) { // coping 1st array 
//         c[i] = a[i];
//     } 

//     for (int i = 0; i < m; i++) { // coping 2nd array 
//         c[i+n] = b[i];
//     } 

//     for (int i = 0; i < n+m; i++) {
//         printf("%d ", c[i]);  // printing after copy 
//     }

//     return 0;
// }