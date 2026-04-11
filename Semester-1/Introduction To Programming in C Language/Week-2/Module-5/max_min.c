// #include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     // min
//     if(a <= b && a <= c) {
//         printf("%d", a);
//     } else if (b <= a && b <= c)
//     {
//         printf("%d", b);
//     } else if (c <= a && c <= b) {
//         printf("%d  ", c);
//     }

//     //mix
//     if(a >= b && a >= c) {
//         printf("%d", a);
//     } else if (b >= a && b >= c)
//     {
//         printf("%d", b);
//     } else if (c >= a && c >= b) {
//         printf("%d", c);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     int min = a, max = a;

//     if (b < min) min = b;
//     if (c < min) min = c;

//     if (b > max) max = b;
//     if (c > max) max = c;

//     printf("%d %d\n", min, max);

//     return 0;
// }