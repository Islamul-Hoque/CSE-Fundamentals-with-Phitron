// #include <stdio.h>
// #include <math.h>

// void Prime(int n){
//     int count = 1;

//     if(n < 2){
//         printf("NO\n");
//         return;
//     }

//     for (int i = 2; i <=sqrt(n); i++){
//         if(n%i == 0){
//             count = 0;
//             break;
//         }
//     }
//     if(count == 1) printf("YES\n");
//     else printf("NO\n");
// }

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--){
//         int n;
//         scanf("%d", &n);
//         Prime(n);
//     }

//     return 0;
// }