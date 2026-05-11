#include <stdio.h>

int main(){
    int r, c, flag = 1;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    if(r == c) {
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if (i!=j){
                        if(a[i][j] != 0) {
                            flag = 0;
                            printf("This is not primary diagonal matrix\n");
                            break;
                    }
                }
            }
        }
        if(flag == 1) printf("This is a primary diagonal matrix\n");

    } else {
        printf("This is not primary diagonal matrix\n");
    }
    return 0;
}