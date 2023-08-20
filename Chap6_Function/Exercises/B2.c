/*=====
    Cho một mảng có n phần tử. Lập hàm tìm giá trị lớn nhất của mảng đó.
=====*/

#include <stdio.h>
#include <stdlib.h>

void nhap_matran(int n, int a[100]) {
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void xuat_matran(int n, int a[100]) {
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int find_max(int n, int a[100]) {
    int max = a[0];
    for(int i = 0; i < n; i++) {
        if(max < a[i]) max = a[i];
    }
    return max;
}

int main() {
    int n, a[100];
    printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
    printf("\n========================\n");
    nhap_matran(n, a);
    printf("\n========================\n");
    xuat_matran(n, a);
    printf("\n========================\n");
    printf("Max: %d", find_max(n, a));
    return 0;
}