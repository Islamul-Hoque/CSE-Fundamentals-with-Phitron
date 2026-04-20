#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while(i <= n);

    return 0;
}

// while loop → condition আগে check করে
// do-while loop → কমপক্ষে ১ বার run হবেই, তারপর condition check করে