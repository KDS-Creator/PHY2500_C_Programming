/*=====
    Cai tien B2.c them ham tim min
=====*/

#include <stdio.h>


void nhap_matrix(int n, int a[100]) {
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void xuat_matrix(int n, int a[100]) {
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int find_max(int n, int a[100]) {
    int max = a[0];
    for(int i = 0; i < n; i++) {
        if(max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int find_min(int n, int a[100]) {
    int min = a[0];
    for(int i = 0; i < n; i++){
        if(min > a[i]) {
            min = a[i];
        }
    }
    return min;
}

int main() {
    int n, a[100];
    printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
    printf("\n========================\n");
    nhap_matrix(n, a);
    printf("\n========================\n");
    xuat_matrix(n, a);
    printf("\n========================\n");
    printf("Min: %d, Max: %d", find_min(n, a), find_max(n, a));
    printf("\n========================\n");
    return 0;
}