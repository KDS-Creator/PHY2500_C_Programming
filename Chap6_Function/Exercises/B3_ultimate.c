/*=====
    Ultimate version of B3.c
=====*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y) {
    int tg = *x;
    *x = *y;
    *y = tg;
}

double get_decimal() {
    return (double)rand() / RAND_MAX;
}

double get_random_num(int a, int b) {
    if(a > b) {
        swap(&a, &b);
    }
    int range = b - a + 1;
    return a + rand() % range;
}

void get_decimal_array(double *arr, int n) {
    for(int i = 0; i < n; i++) {
        *(arr + i) = get_decimal();
    }
}

void get_random_array(int *arr, int n, int a, int b) {
    for(int i = 0; i < n; i++) {
        *(arr+i) = get_random_num(a, b);
    }
}

void xuat_mang_double(double *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%.2lf ", *(arr+i));
    }
}

void xuat_mang_int(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr+i));
    }
}

int main() {
    int n, a, b;
    printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
    printf("\n=======================\n");
    double *decimal_arr = (double*)malloc(n * sizeof(double));
    get_decimal_array(decimal_arr, n);
    xuat_mang_double(decimal_arr, n);
    printf("\n=======================\n");
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    printf("\n=======================\n");
    int *random_arr = (int*)malloc(n * sizeof(int));
    get_random_array(random_arr, n, a, b);
    xuat_mang_int(random_arr, n);
    printf("\n=======================\n");
    // Giai phong bo nho
    free(decimal_arr);
    free(random_arr);
    return 0;
}