/*=====
    Cho một mảng có n phần tử. Tìm giá trị nhỏ nhất và lớn nhất của mảng đó.
=====*/

#include <stdio.h>

int main() {
    int n, a[100];
    printf("Nhap so phan tu: "); scanf("%d", &n);
    printf("\n=================\n");
    // Nhap ma tran
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    printf("\n=================\n");
    // Tim max, min
    int max = a[0], min = a[0];
    for(int i = 0; i < n; i++) {
        if(max < a[i]) max = a[i];
        if(min > a[i]) min = a[i];
    }
    // In ket qua ra man hinh
    printf("Min: %d, Max: %d", min, max);
    printf("\n=================\n");
    return 0;
}