#include <stdio.h>

int main() {

    int tk;
    scanf("%d", &tk);

    // Decision making based on amount
    if (tk >= 100) {
        printf("Burger khabo\n");
    } else if (tk >= 50) {
        printf("Fuchka khabo\n");
    } else if (tk >= 20) {
        printf("Chips khabo\n");
    } else {
        printf("Kichui khabo na\n");
    }

    return 0;
}
