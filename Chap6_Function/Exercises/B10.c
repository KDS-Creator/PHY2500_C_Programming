/*=====
    Cho một ma trận có kích thước m × n. Lập hàm đọc và hàm ghi ra ma trận đó khi biết kích thước m và n.
=====*/

#include <stdio.h>
#include <stdlib.h>

/*===== Nhap ma tran =====*/
void nhap_matrix(int *a, int m, int n) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", (a+i*n+j));
        }
    }
}

/*====== Xuat ma tran =====*/
void xuat_matrix(int *a, int m, int n) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", *(a+i*n+j));
        }
        printf("\n");
    }
}

/*===== Ham Main =====*/
int main() {
    int m, n, *a;
    scanf("%d%d", &m, &n);
    printf("\n=================\n");
    a = (int*)malloc(m * n * sizeof(int));
    if(a == NULL) exit(1);
    nhap_matrix(a, m, n);
    printf("\n=================\n");
    xuat_matrix(a, m, n);
    printf("\n=================\n");
    free(a);
    return 0;
}