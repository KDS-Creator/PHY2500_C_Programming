/*===== 
    Tính phần tử Fn của dãy Fibonacci.
=====*/

#include <stdio.h>

int main() {
    int n, a[100];
    a[0] = 0, a[1] = 1;
    printf("Nhap n: "); scanf("%d", &n);
    
    if(n == 0) {
        printf("%d", a[0]);
    }
    else if(n == 1) {
        printf("%d", a[1]);
    }
    else {
        for(int i = 2; i <= n; i++) {
            a[i] = a[i-1] + a[i-2];
        }
        printf("%d", a[n]);
    }
    printf("\n==========================\n");
    return 0;
}