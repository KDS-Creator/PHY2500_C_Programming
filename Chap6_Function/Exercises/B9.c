/*=====
Cho n và x. Lập hàm tính đa thức Legendre bậc n tại điểm x, Pn(x).
=====*/

#include <stdio.h>
#include <stdlib.h>

/*===== Legendre Function =====*/
float legendre(float a[30], float x, int n) {
    int i;
    a[0] = 1;
    a[1] = x;
    for(i = 2; i <= n; i++) {
        a[i] = (2*i-1)*x*a[i-1]/i - (i-1)*a[i-2]/i;
    }
    return a[n];
}

/*===== Legendre (Pointer) =====*/
float *legendre_v2(float *a, float x, int n) {
    int i;
    float b;
    *a = 1;
    *(a+1) = x;
    for(i = 2; i <= n; i++) {
        *(a+i) = (2*i-1)*x*(*(a+i-1))/i - (i-1)*(*(a+i-2))/i;
    }
    return (a+n);
}

int main() {
    int n;
    float x, *a;
    scanf("%d%f", &n, &x);
    printf("\n=================\n");
    a = (float*)malloc(n * sizeof(float));
    if(a == NULL) exit(1);
    printf("%f", legendre(a, x, n));
    printf("\n=================\n");
    free(a);
    return 0;
}