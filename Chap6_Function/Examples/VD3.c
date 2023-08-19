/*=====
    Lập hàm tráo giá trị hai biến (swap)
=====*/

#include <stdio.h>

void trao(int *x, int *y) {
    int tg = *x;
    *x = *y;
    *y = tg;
}

int main() {
    int a, b;
    puts("Nhap a: "); scanf("%d", &a);
    puts("Nhap b: "); scanf("%d", &b);
    trao(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}