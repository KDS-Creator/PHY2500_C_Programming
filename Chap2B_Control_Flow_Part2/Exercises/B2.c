/*===== Cho một số nguyên dương n. Hãy đếm số chữ số của số n. =====*/

#include <stdio.h>

int main() {
    int n, count = 1;
    printf("Nhap n: "); scanf("%d", &n);
    while(n >= 10) {
        n = n / 10;
        count = count + 1;
    }
    printf("So chu so cua n: %d", count);
    printf("\n===================\n");
    printf("Ket thuc chuong trinh !\n");
    return 0;
}