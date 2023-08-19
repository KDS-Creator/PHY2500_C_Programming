/*=====
    Cho một mảng có n phần tử. Chèn thêm một phần tử vào một vị trí được chọn trong mảng.
=====*/

#include <stdio.h>

int main() {
    int n, pos, val, a[100];
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n=====================\n");
    // Nhap mang
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n=====================\n");
    printf("Nhap vi tri can chen: "); scanf("%d", &pos);
    printf("Nhap gia tri can chen: "); scanf("%d", &val);
    for(int i = n; i >= pos; i--) {
        a[i] = a[i-1];
    }
    a[pos-1] = val;
    n++;
    // In ra mang sau khi chen
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n=====================\n");
    return 0;
}