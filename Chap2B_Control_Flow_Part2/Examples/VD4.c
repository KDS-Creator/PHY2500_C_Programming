/*===== Tính tổng các số tự nhiên từ 1 đến n =====*/

#include <stdio.h>

int main() {
    int i, n, sum;
    printf("Nhap vao so n>0: ");
    scanf("%d", &n);

    i = 0, sum = 0; // Khoi tao i va sum
    while(i < n) {
        i++;
        sum = sum + i;
    }

    printf("Tong: %d", sum);

    printf("\n===================\n");
    printf("Ket thuc chuong trinh\n");
    return 0;
}