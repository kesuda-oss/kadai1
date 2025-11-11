#include <stdio.h>
char grade(int a){
    if (a < 0 || a > 100) {
        printf("エラー");
    }
    if (a >= 100) {
        return 'A';
    }
    else if (a >= 80) {
        return 'B';
    }
    else if (a >= 60) {
        return 'C';
    }
    else if (a >= 40) {
        return 'D';
    }
    else if (a >= 20) {
        return 'E';
    }
    else {
        return 'F';
    }
}
int main(void) {
    int score;
    printf("点数を入力してください: ");
    scanf("%d", &score);

    char result = grade(score);

    if (score < 0 || score > 100) {
        printf("エラー\n");
    } else {
        printf("あなたの評価は %c です。\n", result);
    }

    return 0;
}