/*=====
    Cho số n. In ra tam giác Pascal với n dòng.
=====*/

#include <stdio.h>

int main() {
    int n, a[100][100];
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n====================\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            if((j == 0) || (i == j)) {
                a[i][j] = 1;
            }
            else {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    }
    // Xuat ra man hinh tam giac pascal
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n====================\n");
    return 0;
}