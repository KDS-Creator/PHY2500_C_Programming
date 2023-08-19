/*=====
    Lập hàm kiểm tra một số có phải số nguyên tố
=====*/

#include <stdio.h>

int so_uoc(int n) {
    int i, dem = 0;

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            dem++;
        }
    }
    return dem;
}

int main() {
    int n;
    puts("Nhap vao so can kiem tra: "); scanf("%d", &n);

    if(so_uoc(n) == 2) {
        puts("Day la so nguyen to!");
    }
    else {
        puts("day khong phai so nguyen to!");
    }
    printf("\n=====================\n");
    return 0;
}