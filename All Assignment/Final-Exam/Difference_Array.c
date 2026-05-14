// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int t,n;
//     scanf("%d", &t);
    
//     while(t--){
//         scanf("%d", &n);
//         int a[n];
//         for (int i = 0; i <n; i++) {
//             scanf("%d", &a[i]);
//         }

//         int b[n];
//         for (int i = 0; i <n; i++) { // copy a in b
//             b[i] = a[i];
//         }

//         for (int i = 0; i <n; i++) { 
//             for (int j = i+1; j <n; j++) { // ascending order
//                 if(b[i] > b[j]){
//                     int temp = b[i];
//                     b[i] = b[j];
//                     b[j] = temp;
//                 }
//             }
//         }

//         int c[n];
//         for (int i = 0; i <n; i++) {  // absolute difference
//             c[i] = abs(b[i] - a[i]);
//             printf("%d ", c[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }