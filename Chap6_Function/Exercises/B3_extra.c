/*=====
    Them ham tao array ngau nhien va in ra array
=====*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int tg = *a;
    *a = *b;
    *b = tg;
} 

int get_Random_range(int a, int b) {
    if(a > b) {
        swap(&a, &b);
    }
    int range = b - a + 1;
    int random_num = a + rand() % range;
    return random_num;
}

void get_Random_arr(int *arr, int n, int a, int b) {
    for(int i = 0; i < n; i++) {
        *(arr+i) = get_Random_range(a, b);
    }
}

void xuat_matran(int *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(a+i));
    }
}

int main() {
    // seed time
    srand(time(NULL));
    // Khai bao bien
    int n, a, b;
    printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
    printf("\n=======================\n");
    printf("Nhap khoang [a, b] cua moi phan tu\n");
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    printf("\n=======================\n");
    // cap phat dong cho mang
    int *random_arr = (int*)malloc(n * sizeof(int));
    get_Random_arr(random_arr, n, a, b);
    xuat_matran(random_arr, n);
    printf("\n=======================\n");
    // Giai phong bo nho
    free(random_arr);
    return 0;
}