/*===== Tìm bội chung nhỏ nhất của hai số a và b. =====*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);

    int a_cp = a, b_cp = b;

    while(a != b) {
        if(a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    printf("UCLN(%d,%d) = %d, BCNN(%d,%d) = %d", a_cp, b_cp, b, a_cp, b_cp, a_cp*b_cp/b);
    printf("\n=======================\n");
    return 0;
}