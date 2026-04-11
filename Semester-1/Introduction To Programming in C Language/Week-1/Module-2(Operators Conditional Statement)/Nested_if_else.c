#include <stdio.h>

int main() {
    int tk;
    scanf("%d", &tk);

    // Decision making based on amount
    if (tk >= 5000) {
        printf("Cox'sbazar jabo\n");

        if (tk >= 10000) {
            printf("Saint Martin jabo\n");
        } else {
            printf("jabo na\n");
        }
    } else {
        printf("Kothao jabo na\n");
    }

    return 0;
}