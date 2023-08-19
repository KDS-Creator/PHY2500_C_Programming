/*=====
    Cho ma trận A có m hàng và n cột, và ma trận B có p hàng q cột. Xét xem hai ma trận A và B có thực
hiện được phép nhân ma trận (đại số tuyến tính) không, nếu có thì thực hiện phép toán và in ra kết quả, nếu
không thì in ra dòng chữ “INVALID”.
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p, q, *a, *b, *c, i, j, k;
    printf("Nhap so hang ma tran 1: "); scanf("%d", &m);
    printf("Nhap so cot ma tran 1: "); scanf("%d", &n);
    printf("\n======================\n");
    // Cap phat bo nho cho ma tran 1
    a = (int*)malloc(m * n * sizeof(int));
    if(a == NULL) exit(1);
    // Nhap ma tran 1
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", (a+i*n+j));
        }
    }
    printf("\n======================\n");
    printf("Nhap so hang ma tran 2: "); scanf("%d", &p);
    printf("Nhap so cot ma tran 2: "); scanf("%d", &q);
    printf("\n======================\n");
    // Cap phat bo nho cho ma tran 2
    b = (int*)malloc(p * q * sizeof(int));
    if(b == NULL) exit(1);
    // Nhap ma tran 2
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", (b+i*q+j));
        }
    } 
    printf("\n======================\n");
    if(n == p) {
        // Cap phat bo nho cho ma tran tich
        c = (int*)malloc(m * q * sizeof(int));
        for(i = 0; i < m; i++) {
            for(j = 0; j < q; j++) {
                *(c + i*q + j) = 0;
                for(k = 0; k < n; k++) {
                    *(c + i*q + j) += *(a + i*n + k) * (*(b + k*q + j));
                }
            }
        }
        // In ra ma tran tich
        for(i = 0; i < m; i++) {
            for(j = 0; j < q; j++) {
                printf("%d ", *(c + i*q + j));
            }
            printf("\n");
        }
    }
    else {
        printf("INVALID");
    }
    printf("\n======================\n");
    // Giai phong bo nho
    free(a);
    free(b);
    free(c);
    return 0;
}