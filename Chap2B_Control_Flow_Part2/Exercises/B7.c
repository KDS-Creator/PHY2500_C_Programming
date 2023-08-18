/*===== Cho số x với |x| < 1. Tính giá trị của ln(1 − x) đến số hạng thứ n =====*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x;
    scanf("%d%f", &n, &x);
    float ts = 1, ms = 1, s = 0;
    for(int i = 1; i <= n; i++) {
        ts *= x;
        ms = i;
        s += (ts/ms);
    }
    printf("ln(1-%f) = %f (Taylor)\n", x, -s);
    printf("ln(1-%f) = %f (Math.h)\n", x, log(1-x));
    printf("\n===================\n");
    return 0;
}