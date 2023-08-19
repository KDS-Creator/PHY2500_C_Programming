/*=====
    Cho một mảng có n phần tử. Xóa một phần tử ở một vị trí được chọn trong mảng.
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *a;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n======================\n");
    // Cap phat bo nho dong
    a = (int*)malloc(n * sizeof(int));
    if(a == NULL) {
        exit(1);
    }
    // Nhap mang
    for(int i = 0; i < n; i++) {
        scanf("%d", (a+i));
    }
    printf("\n======================\n");
    int pos;
    scanf("%d", &pos);
    for(int i = pos-1; i < n; i++) {
        *(a+i) = *(a+i+1);
    }
    a = (int*)realloc(a, n-1);
    printf("\n======================\n");
    // Xuat ra mang sau khi xoa
    for(int i = 0; i < n-1; i++) {
        printf("%d ", *(a+i));
    }
    printf("\n======================\n");
    // Giai phong bo nho
    free(a);
    return 0;
}