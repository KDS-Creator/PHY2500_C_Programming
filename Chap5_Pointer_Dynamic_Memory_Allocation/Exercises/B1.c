/*=====
    Cho số n. Hãy cấp phát bộ nhớ động cho mảng a có n phần tử là các số có kiểu int, sau đó nhập vào các giá
trị của mảng a rồi in ra giá trị và địa chỉ của các phần tử của mảng.
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *a;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n======================\n");
    // Cap phat dong
    a = (int*)malloc(n * sizeof(int));
    // Check a == NULL
    if(a == NULL) {
        exit(1);
    }
    // Nhap mang
    for(int i = 0; i < n; i++) {
        printf("*(a+%d) = ",i);
        scanf("%d", (a+i));
    }
    printf("\n======================\n");
    // Xuat gia tri cua mang
    for(int i = 0; i < n; i++) {
        printf("%d ", *(a+i));
    }
    printf("\n======================\n");
    // Xuat dia chi cua mang
    for(int i = 0; i < n; i++) {
        printf("%d ", (a+i));
    }
    printf("\n======================\n");
    // Giai phong mang
    free(a);
    return 0;
}