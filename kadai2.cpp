#include <stdio.h>
double kadai2(double sin , double tai ) {


    return tai*tai/sin;
}
int main(void) {
    int sin , tai;
    printf("あなたの身長を入力してください");
    scanf("%f", &sin);
    printf("あなたの体重を入力して下い");
    scanf("%f", &tai);
    printf("%.2f",kadai2(sin , tai));
}