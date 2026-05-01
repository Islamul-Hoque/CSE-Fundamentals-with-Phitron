// #include <stdio.h>

// int main() {
//     int a, b, flag = 0;
//     scanf("%d %d", &a, &b);

//     for (int i = a; i<=b; i++){
//         int lucky = 1;
//         int num = i;

//         while (num > 0) {
//             int lastDigit = num % 10;
//             if(lastDigit != 4 && lastDigit != 7){
//                 lucky = 0;
//                 break;
//             }
//             num/= 10;
//         }
//         if(lucky == 1){
//             flag = 1; 
//             printf("%d ", i);
//         }

//     }
//     if(flag == 0) printf("-1");
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b, flag =0;
//     scanf("%d %d", &a, &b);

//     for (int i = a; i <= b; i++){
//         int lucky = 1, num = i;

//         while (num > 0) {
//             int lastDigit = num % 10;
//             if(lastDigit != 4 && lastDigit != 7){
//                 lucky = 0;
//                 break;
//             }
//             num/=10;
//         }

//         if(lucky == 1){
//             flag = 1;
//             printf("%d ", i);
//         }
//     }
//     if(flag == 0) printf("-1");

//     return 0;
// }