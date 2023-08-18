/*===== Tính tổng các số tự nhiên từ 1 đến 100 =====*/

#include <stdio.h>

int main() {
    int i, s;
    s = 0;
    for(i = 1; i <= 100; i++) {
        s = s + i;
    }
    printf("Tong la: %d", s);
    printf("\n====================\n");
    printf("ket thuc chuong trinh\n");
    return 0;
}