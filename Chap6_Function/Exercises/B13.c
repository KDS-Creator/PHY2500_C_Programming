/*=====
    Cho ma trận A có m hàng và n cột, và ma trận B có m hàng p cột. Lập hàm trả về ma trận C là ma trận
mở rộng của A và B, C = [A|B] (dễ thấy C có kích thước m hàng n + p cột).
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

/*===== Mo rong ma tran =====*/
void extend_matrix(int *a, int *b, int *c, int m, int n, int p) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n+p; j++) {
            if(j < n) {
                *(c+i*(n+p)+j) = *(a+i*n+j);
            }
            else {
                *(c+i*(n+p)+j) = *(b+i*p+j-n);
            }
        }
    }
}

/*===== Main Function =====*/
int main() {
    int m, n, p;
    int *a, *b, *c;
    scanf("%d%d%d", &m, &n, &p);
    printf("\n======================\n");
    // Khoi tao bo nho cho con tro a, b, c
    a = (int*)malloc(m * n * sizeof(int));
    b = (int*)malloc(m * p * sizeof(int));
    c = (int*)malloc(m * (n+p) * sizeof(int));
    // Check a, b, c == NULL
    if(a == NULL) exit(1);
    if(b == NULL) exit(1);
    if(c == NULL) exit(1);
    // Nhap ma tran a
    nhap_matrix(a, m, n);
    printf("\n======================\n");
    // Nhap ma tran b
    nhap_matrix(b, m, p);
    printf("\n======================\n");
    // Xuat ma tran mo rong c
    extend_matrix(a, b, c, m, n, p);
    xuat_matrix(c, m, n+p);
    printf("\n======================\n");
    // Giai phong bo nho
    free(a);
    free(b);
    free(c);
    return 0;
}