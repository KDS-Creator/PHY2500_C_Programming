/*=====
    Cho một ma trận có m × n phần tử. Hãy chuyển vị ma trận đó.
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, *a;
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
        // Chuyen vi ma tran
        for(int j = 0; j < n; j++) {
            for(int i = 0; i < m; i++) {
                printf("%d ", *(a+i*n+j));
            }
            printf("\n");
        }
    }
    printf("\n======================\n");
    // Giai phong bo nho
    free(a);
    return 0;
}