// #include <stdio.h>
// #include <limits.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int a[n];
//     for (int i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     int mn = INT_MAX, count = 0;

//     for (int i = 0; i < n; i++)
//         if (a[i] < mn)
//             mn = a[i];

//     for (int i = 0; i < n; i++)
//         if (a[i] == mn)
//             count++;

//     if (count % 2 == 1)
//         printf("Lucky");
//     else
//         printf("Unlucky");

//     return 0;
// }