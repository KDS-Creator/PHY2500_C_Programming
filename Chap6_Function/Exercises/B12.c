/*=====
    Cho ma trận A có m hàng và n cột. Cho hai u và v là chỉ số của hai hàng nào đó của ma trận A. Lập một
hàm thực hiện thao tác tráo hai hàng u và v của ma trận A.
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

/*===== Xuat ma tran =====*/
void xuat_matrix(int *a, int m, int n) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", *(a+i*n+j));
        }
        printf("\n");
    }
}

/*===== Trao =====*/
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

/*===== Trao 2 hang cua ma tran =====*/
void swap_row(int *a, int u, int v, int n) {
    int i, j;
    for(j = 0; j < n; j++) {
        swap(a+(u-1)*n+j, a+(v-1)*n+j);
    }
}

int main() {
    int m, n; // Khoi tao so hang va so cot
    int *a; // Khoi tao con tro
    scanf("%d%d", &m, &n);
    printf("\n===========================\n");
    // Cap phat bo nho cho con tro a
    a = (int*)malloc(m * n * sizeof(int));
    if(a == NULL) exit(1);
    // Nhap ma tran
    nhap_matrix(a, m, n);
    printf("\n===========================\n");
    xuat_matrix(a, m, n);
    printf("\n===========================\n");
    int u, v;
    scanf("%d%d", &u, &v);
    printf("\n===========================\n");
    swap_row(a, u, v, n);   
    // Xuat ma tran sau khi trao
    xuat_matrix(a, m, n);
    printf("\n===========================\n");
    // Giai phong bo nho
    free(a);
    return 0;
}