/*=====
    Tìm phần tử lớn nhất trong ma trận có m hàng, n cột
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, max, i, j, *a;
    
    printf("Nhap vao gia tri m, n: "); scanf("%d%d", &m, &n);

    // Cap phat bo nho dong
    a = (int*)calloc(m * n, sizeof(int));

    if(a == NULL) {
        exit(1);
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", (a+i*n+j)); // Nhap a[i][j]
        }
    }
    max = *a;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(max < *(a+i*n+j)) max = *(a+i*n+j);
        }
    }

    printf("Gia tri max la: %d", max);
    printf("\n====================\n");
    // Giai phong vung nho
    free(a);
    return 0;
}