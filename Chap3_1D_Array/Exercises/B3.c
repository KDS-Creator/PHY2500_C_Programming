/*=====
    Cho một mảng có n phần tử. Lọc ra các số dương (≥ 0) và các số âm (< 0) để lưu vào hai mảng khác nhau.
=====*/

#include <stdio.h>

int main() {
    int n, a[100], b[100], c[100], pos_idx = 0, neg_idx = 0;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n==================\n");
    // Nhap mang
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    printf("\n==================\n");
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            b[neg_idx] = a[i];
            neg_idx++;
        }
        if(a[i] >= 0) {
            c[pos_idx] = a[i];
            pos_idx++;
        }
    }
    // In ra man hinh
    for(int i = 0; i < pos_idx; i++) {
        printf("%d ", c[i]);
    }
    printf("\n==================\n");
    for(int i = 0; i < neg_idx; i++) {
        printf("%d ", b[i]);
    }
    printf("\n==================\n");
    return 0;
}