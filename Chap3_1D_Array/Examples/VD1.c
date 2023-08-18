/*===== Nhập dữ liệu cho mảng 1 chiều =====*/
#include <stdio.h>

int main() {
    int a[50], i, n;
    puts("Nhap n: "); scanf("%d", &n);
    printf("\n===================\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n===================\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n===================\n");
    return 0;
}