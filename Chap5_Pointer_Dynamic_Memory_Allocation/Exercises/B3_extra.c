/*=====
    thực hiện thao tác thêm một phần tử vào mảng.
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *a;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n======================\n");
    // Cap phat bo nho dong
    a = (int*)calloc(n, sizeof(int));
    if(a == NULL) {
        exit(1);
    }
    // Nhap mang
    for(int i = 0; i < n; i++) {
        scanf("%d", (a+i));
    }
    printf("\n======================\n");
    // Nhap phan tu can them va vi tri cua no
    int pos, val;
    scanf("%d%d", &pos, &val);
    for(int i = n; i >= pos; i--) {
        *(a+i) = *(a+i-1);
    }
    a = (int*)realloc(a, n+1);
    printf("\n======================\n");
    // Xuat mang sau khi them phan tu
    for(int i = 0; i <= n; i++) {
        printf("%d ", *(a+i));
    }
    printf("\n======================\n");
    // Giai phong bo nho
    free(a);
    return 0;
}