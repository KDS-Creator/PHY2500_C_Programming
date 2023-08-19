/*=====
    Nhập dữ liệu cho mảng 2 chiều và in mảng đó ra màn hình
=====*/

#include <stdio.h>

int main() {
    int i, j, row, col, a[50][50]; // Khai bao mang a co 50x50 phan tu
    puts("Nhap hang(row) va cot(col)) cua ma tran:");
    scanf("%d%d", &row, &col);
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Phan tu a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]); // Nhap gia tri cho cac phan tu cua mang
        }
    }
    printf("\nMa tran vua nhap la:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++)
            printf("%d\t", a[i][j]); // In ra cac phan tu cua mang dang hang - cot
        printf("\n");
    }
    return 0;
}