/*=====
    thực hiện thao tác xóa một phần tử của mảng.
=====*/

#include <stdio.h>

int main() {
    int n, a[100];
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n=====================\n");
    // Nhap mang
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    printf("\n=====================\n");
    // Xoa phan tu trong mang
    int pos;
    printf("Nhap vi tri can xoa: "); scanf("%d", &pos);
    printf("\n=====================\n");
    for(int i = pos-1; i < n; i++) {
        a[i] = a[i+1];
    }
    n--;
    // In mang sau khi xoa
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n=====================\n");
    return 0;
}