/*=====
    Cho một ma trận có m hàng n cột. Hãy cấp phát bộ nhớ động cho mảng a chứa các phần tử kiểu int của ma
    trận đó. Nhập vào các giá trị của mảng a rồi in ra giá trị và địa chỉ của các phần tử của mảng (theo hàng và
    cột).
=====*/ 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, *a;
    printf("Nhap so hang: "); scanf("%d", &m);
    printf("Nhap so cot: "); scanf("%d", &n);
    printf("\n======================\n");
    // Cap phat dong bo nho
    a = (int*)malloc(m * n * sizeof(int));
    // Check if a == NULL
    if(a == NULL) {
        exit(1);
    }
    // Nhap ma tran
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("*(a+%d*n+%d) = ", i, j);
            scanf("%d", (a+i*n+j));
        }
    }
    printf("\n======================\n");
    // Xuat ma tran
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", *(a+i*n+j));
        }
        printf("\n");
    }
    printf("\n======================\n");
    // Xuat dia chi ma tran
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", (a+i*n+j));
        }
        printf("\n");
    }
    printf("\n======================\n");
    // Giai phong bo nho
    free(a);
    return 0;
}