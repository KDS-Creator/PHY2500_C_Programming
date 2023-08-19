/*=====
    Cho một ma trận có m × n phần tử. Tính tổng các phần tử trên đường chéo chính của ma trận đó.
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, *a, s = 0;
    printf("Nhap m: "); scanf("%d", &m);
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n======================\n");
    // Cap phat bo nho dong cho ma tran
    a = (int*)malloc(m * n * sizeof(int));

    if(a == NULL) {
        exit(1);
    }
    else {
        // Nhap ma tran
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                scanf("%d", (a+i*n+j));
            }
        }
        printf("\n======================\n");
        // Tinh tong cac phan tu tren duong cheo chinh
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j) {
                    s += *(a+i*n+j);
                }
            }
        }
        printf("Tong cac phan tu tren duong cheo chinh: %d", s);
    }
    printf("\n======================\n");
    // Giai phong bo nho
    free(a);
    return 0;
}