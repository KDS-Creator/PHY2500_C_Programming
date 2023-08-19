/*=====
    Cho một mảng có n phần tử. Đảo ngược mảng đã cho.
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
    // Dao nguoc mang
    for(int i = 0; i <= n/2-1; i++) {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    // In ra
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n=====================\n");
    return 0;
}