// #include <stdio.h>

// int main() {
//     int a;
//     scanf("%d", &a);

//     // Check even or odd
//     if (a % 2 == 0) {
//         printf("%d is even number\n", a);
//     } else {
//         printf("%d is odd number\n", a);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num;
//     scanf("%d", &num);

//     // Check positive or negative number
//     if (num > 0) {
//         printf("%d is positive number\n", num);
//     } else {
//         printf("%d is negative number\n", num);
//     }

//     return 0;
// }


// Explain if else ladder

// Definition:  
// An if-else ladder is a control structure in C programming used to test multiple conditions sequentially. 
// If the first condition is false, the next condition is checked, and this continues until one condition is true. 
// If none of the conditions are true, the final else block is executed.

// Syntax:

// if (condition1) {
//     // statements for condition1
// }
// else if (condition2) {
//     // statements for condition2
// }
// else if (condition3) {
//     // statements for condition3
// }
// else {
//     // default statements
// }


// Explanation:

// The program starts by checking the first if condition.
// If it is true, the corresponding block executes and the rest are skipped.

// If it is false, the next else if condition is checked.
// This process continues like a ladder until one condition is satisfied.

// If none of the conditions are true, the else block executes.

// Example:
// #include <stdio.h>
// int main() {
//     int marks = 65;

//     if (marks >= 80) {
//         printf("Grade: A+\n");
//     } else if (marks >= 70) {
//         printf("Grade: A\n");
//     } else if (marks >= 60) {
//         printf("Grade: B\n");
//     } else {
//         printf("Grade: F\n");
//     }

//     return 0;
// }


// Conclusion:  
// The if-else ladder allows programmers to handle multiple conditions in a structured and sequential way, 
// making decision-making in programs clear and efficient.