// // Q-1
// #include <stdio.h>

// void swap(int *p, int *q){
//     int temp = *p;  // temp = *p অর্থাৎ temp = 6
//     *p = *q;        // *p = *q অর্থাৎ a = 5
//     *q = temp;      // *q = temp অর্থাৎ b = 6
// }

// int main(){
//     int a = 6, b = 5;
//     swap(&a, &b);
//     printf("%d %d\n", a, b);
// }


// // Q-2
// #include <stdio.h>
// void m(int *p){
//     int i = 0;
//     for (i = 0; i < 5; i++)
//         printf("%d ", p[i]);
// }

// int main(){
//     int a[5] = {6, 5, 3};
//     m(a);
// }


// // Q-3
// #include <stdio.h>
// void m(int p, int q){
//     int temp = p;
//     p = q;
//     q = temp;
// }

// int main(){
//     int a = 6, b = 5;
//     m(a, b);
//     printf("%d %d\n", a, b);
// }


// // Q-4
// #include <stdio.h>
// int main() {
//     int ary[4] = {1, 2, 3, 4};
//     printf("%d\n", *ary); // *ary => 0 index er value 
// } 


// Q-5
#include <stdio.h>
int main()
{
    int ary[4] = {1, 2, 3, 4};
    int *p;
    p = ary + 3;   // pointer p এখন ary[3] এর দিকে নির্দেশ করছে
    *p = 5;        // ary[3] এর মান পরিবর্তন করে 5 করা হলো
    printf("%d\n", ary[3]);
}
