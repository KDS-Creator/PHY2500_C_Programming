/*=====
    Ultimate version of B2.c
=====*/

#include <stdio.h>
#include <stdlib.h>

int *nhap_matrix(int n) {
    int *a;
    a = (int*)calloc(n, sizeof(int));
    if(a == NULL) exit(1);
    for(int i = 0; i < n; i++) {
        scanf("%d", (a+i));
    }
    return a;
}

void xuat_matrix(int n, int *a) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(a+i));
    }
}

// Find max
int find_max(int n, int *a) {
    int max = *a;
    for(int i = 0; i < n; i++) {
        if(max < *(a+i)) {
            max = *(a+i);
        }
    }
    return max;
}

// Find min
int find_min(int n, int *a) {
    int min = *a;
    for(int i = 0; i < n; i++) {
        if(min > *(a+i)) {
            min = *(a+i);
        }
    }
    return min;
}

int main() {
    int n, *a;
    // Nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
    printf("\n========================\n");
    // Nhap mang
    a = nhap_matrix(n);
    printf("\n========================\n");
    // Xuat mang
    xuat_matrix(n, a);
    printf("\n========================\n");
    printf("Min: %d, Max:%d", find_min(n, a), find_max(n, a));
    printf("\n========================\n");
    // Giai phong bo nho
    free(a);
    return 0;
}