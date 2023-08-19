/*=====
    Tính trung bình cộng (TBC) của n số
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, sum = 0;
    int *a; // Khai bao con tro a

    printf("Nhap vao gia tri n: ");
    scanf("%d", &n);

    // Cap phat n * sizeof(int) byte cho a
    a = (int*)malloc(n * sizeof(int));

    // Check if a = NULL
    if(a == NULL) {
        exit(1);
    }

    // Nhap con tro
    for(i = 0; i < n; i++) {
        printf("a[%d] = ",i);
        scanf("%d", (a+i));
    }

    // Tinh tong
    for(i = 0; i < n; i++) {
        sum += *(a+i); // TInh tong
    }

    printf("TBC: %f", (float)sum/n);

    printf("\n===================\n");

    // Giai phong bo nho
    free(a);
    return 0;
}