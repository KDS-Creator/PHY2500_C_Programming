/*=====
    Cho ma trận A có m hàng và n cột, và ma trận B có p hàng q cột. Xét xem hai ma trận A và B có thực hiện
được phép nhân ma trận không, nếu có thì thực hiện phép toán và in ra kết quả, nếu không thì in ra dòng
chữ “INVALID”.
=====*/

#include <stdio.h>

int main() {
    int m, n, p, q, a[100][100], b[100][100], c[100][100];
    scanf("%d%d", &m, &n);
    printf("\n====================\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n====================\n");
    scanf("%d%d", &p, &q);
    printf("\n====================\n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n====================\n");
    if(n == p) {
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                c[i][j] = 0;
                for(int k = 0; k < p; k++) {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        // In ma tran tich
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("INVALID");
    }
    printf("\n====================\n");
    return 0;
}