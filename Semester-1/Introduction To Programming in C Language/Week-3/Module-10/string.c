#include <stdio.h>

// int main()
// {
//     int a[4];
//     for (int i = 0; i < 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// char type
// int main()
// {
//     char a[10];
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%c", &a[i]); // %c = space ke input count kore
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%c", a[i]);
//     }

//     return 0;
// }

// string type
int main()
{
    char a[10];
    printf("garbage value: %d\n", a[7]);

    scanf("%s", &a); // %s = space diye char likha lagbe na. char array 1 line e sob infut nite pare, tai eitar arek name string array
    printf("%s\n", a);
    printf("1 number char: %c\n", a[1]);
    printf("7 number char: %c %c %c\n", a[6], a[7], a[8]); // nul = '/0'
    printf("Null er ASCII value: %d", a[7]);

    return 0;
}

// %d, %lld, %f, %lf = era sobai space ke input input hisebe count kore na,
// karon space eita kono Int na Float value na
//  tara space dekhle bujhe: ekta input number sesh hoyeche,

// %s = string input neoyar porer index e '/0' = null char set kore, tai array size total size er ceye 1 beshi nite hoy
// null er pore baki golate garbage value thake
