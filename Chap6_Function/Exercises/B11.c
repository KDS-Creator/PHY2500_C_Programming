/*=====
    Cho ma trận A có m hàng và n cột, và ma trận B có p hàng q cột. Lập hàm xét xem hai ma trận A và B có
thực hiện được phép nhân ma trận không. Hàm này trả về 2 đối số đầu ra: flag và C, trong đó flag có giá trị
0 hoặc 1 tương ứng với các trường hợp không thực hiện được hoặc có thực hiện được phép nhân ma trận; C
là kết quả của phép nhân ma trận, trong trường hợp không thực hiện được phép nhân, C = NULL.
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

/*===== Nhan ma tran =====*/
int nhan_matrix(int *a, int *b, int *c, int m, int n, int p, int q) {
    int flag;
    int i, j, k;
    if(n != p) {
        flag = 0;
        c = NULL;
    }
    else {
        flag = 1;
        for(i = 0; i < m; i++) {
            for(j = 0; j < q; j++) {
                *(c+i*q+j) = 0;
                for(k = 0; k < n; k++) {
                    *(c+i*q+j) += *(a+i*n+k) * (*(b+k*q+j));
                }
            }
        }
    }
    return flag;
}

int main() {
    int m, n, p, q; // Khai bao cac bien thuong
    int *a, *b, *c; // Khai bao con tro
    // Nhap hang va cot ma tran 1
    scanf("%d%d", &m, &n);
    // Cap phat bo nho cho con tro a
    a = (int*)malloc(m * n * sizeof(int));
    if(a == NULL) exit(1);
    printf("\n=====================\n");
    // Nhap ma tran a
    nhap_matrix(a, m, n);
    printf("\n=====================\n");
    // Nhap hang va cot ma tran 2
    scanf("%d%d", &p, &q);
    // Cap phat bo nho cho con tro b
    b = (int*)malloc(p * q * sizeof(int));
    if(b == NULL) exit(1);
    printf("\n=====================\n");
    // Nhap ma tran b
    nhap_matrix(b, p, q);
    printf("\n=====================\n");
    // Cap phat bo nho cho con tro c
    c = (int*)malloc(m * q * sizeof(int));
    // Nhan ma tran
    int flag = nhan_matrix(a, b, c, m, n, p, q);
    if(flag == 1) {
        printf("%d\n", flag);
        xuat_matrix(c, m, q);
    }
    if(flag == 0) {
        printf("%d INVALID !!", flag);
        exit(1);
    }
    printf("\n=====================\n");
    free(a);
    free(b);
    free(c);
    return 0;
}