/*=====
    Cho một mảng có n phần tử. Lập hàm sắp xếp lại các phần tử của mảng đó theo chiều tăng dần, sau đó loại
bỏ các phần tử có giá trị trùng lặp.
=====*/

#include <stdio.h>
#include <stdlib.h>

/*===== Nhap mang =====*/
void nhap(int *a, int n) {
    for(int i = 0; i < n; i++) {
        scanf("%d", (a+i));
    }
}

/*===== Xuat mang =====*/
void xuat(int *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(a+i));
    }
}

/*===== Trao hang =====*/
void swap(int *x, int *y) {
    int tg = *x;
    *x = *y;
    *y = tg;
}

/*===== Sap xep =====*/
void sapxep(int *a, int n) {
    int i, j;
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(*(a+i) > *(a+j)) {
                swap(a+i, a+j);
            }
        }
    }
}

/*===== Xoa =====*/
void xoa(int *a, int *n, int k) {
    int i;
    for(i = k; i < *n; i++) {
        *(a+i-1) = *(a+i);
    }
    *n = *n - 1;
}

/*===== Xoa trung =====*/
void xoa_trung(int *a, int *n) {
    int i, j;
    for(i = 0; i < *n-1; i++) {
        for(j = i+1; j < *n; j++) {
            if(*(a+i) == *(a+j)) {
                xoa(a, n, j);
                i--;
            }
        }
    }
}

int main() {
    int *a, n;
    scanf("%d", &n);
    printf("\n======================\n");
    // Cap phat bo nho cho con tro
    a = (int*)calloc(n, sizeof(int));
    // Check a == NULL
    if(a == NULL) exit(1);
    // Nhap mang
    nhap(a, n);
    printf("\n======================\n");
    // Xuat mang
    xuat(a, n);
    printf("\n======================\n");
    // Xuat mang sau khi sap xep
    sapxep(a, n);
    xuat(a, n);
    printf("\n======================\n");
    // Xuat mang sau khi xoa trung
    xoa_trung(a, &n);
    xuat(a, n);
    printf("\n======================\n");
    // Giai phong bo nho
    free(a);
    return 0;
}