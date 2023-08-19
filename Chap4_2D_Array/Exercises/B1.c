/*=====
    Cho một bảng số gồm m hàng và n cột. Tìm giá trị nhỏ nhất và lớn nhất của bảng số đó.
=====*/

#include <stdio.h>

int main() {
    int m, n, a[100][100];
    printf("Nhap so hang: "); scanf("%d", &m);
    printf("Nhap so cot: "); scanf("%d", &n);
    printf("\n====================\n");
    // Nhap ma tran
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n====================\n");
    // Tim max, min
    int max = a[0][0], min = a[0][0];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(max < a[i][j]) max = a[i][j];
            if(min > a[i][j]) min = a[i][j];
        }
    }
    // Xuat ra man hinh max, min
    printf("Max: %d, Min: %d", max, min);
    printf("\n====================\n");
    return 0;
}