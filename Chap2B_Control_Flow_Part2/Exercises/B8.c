/*===== Cho số x. Tính giá trị của e^x với sai số 10^(−9) dựa trên công thức khai triển Taylor =====*/

#include <stdio.h>
#include <math.h>
#define eps 1e-9

int main() {
    float x;
    printf("Nhap x: "); scanf("%f", &x);
    double s = 1, ts = 1, ms = 1;
    int i = 1;
    while(fabs(ts/ms) > eps) {
        ts *= x;
        ms *= i;
        s += ts/ms;
        i++;
    }
    printf("exp(%f) = %f (Taylor)\n", x, s);
    printf("exp(%f) = %f (Math.h)\n", x, exp(x));
    printf("\n====================\n");
    return 0;
}