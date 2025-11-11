#include <stdio.h>

int main(void) {
    int n;
    printf("ツリーの高さを入力してください: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;
        int spaces = n - i;

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
