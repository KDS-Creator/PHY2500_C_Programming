/*=====
    Cho hai số thực x và a. Lập một hàm tính x^a
sử dụng khai triển Taylor với một sai số err cho trước.
=====*/

#include <stdio.h>
#include <math.h>

double taylor(double x, double a) {
    return exp(a*log(x));
}

int main() {
    double x, a;
    scanf("%lf%lf", &x, &a);
    printf("\n======================\n");
    printf("x^a = %lf", taylor(x, a));
    printf("\n======================\n");
    return 0;
}