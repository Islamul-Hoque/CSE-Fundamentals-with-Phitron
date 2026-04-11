#include <stdio.h>
int main()
{
    int a = 6;

    if (a > 5) {
        printf("hi\n");
    } else if (a > 3)
    {
        printf("bye\n"); // প্রথম শর্তই সত্য হয়েছে, else if আর execute হবে না
    }
    return 0;
}