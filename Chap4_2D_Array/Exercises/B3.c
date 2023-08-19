/*=====
    Cho một ma trận vuông có n × n phần tử. Tính tổng các phần tử trên đường chéo chính của ma trận đó.
=====*/

#include <stdio.h>

int main() {
    int n, a[100][100], s = 0;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n====================\n");
    // Nhap ma tran
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n====================\n");
    // Tinh tong duong cheo chinh
    for(int i = 0; i < n; i++) {
        s += a[i][i];
    }
    // In tong
    printf("Tong: %d", s);
    printf("\n====================\n");
    return 0;
}