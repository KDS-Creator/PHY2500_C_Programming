/*=====
    (Nâng cao) Lập hàm tính N giai thừa
=====*/

#include <stdio.h>

int giai_thua(int n) {
    if(n == 0) return 1;
    return n * giai_thua(n-1);
}

int main() {
    int n;
    puts("Nhap vao N: "); scanf("%d", &n);
    printf("N giai thua = %d", giai_thua(n));
    return 0;
}