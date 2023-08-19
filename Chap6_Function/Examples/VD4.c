/*=====
    Lập hàm sắp xếp dãy tăng dần (interchange sort)
=====*/

#include <stdio.h>
#include <stdlib.h>

int *nhap_day(int N) {
    int i, *A;
    A = (int*)calloc(N, sizeof(int));
    for(i = 0; i < N; i++) {
        printf("A[%d] = ",i);
        scanf("%d", (A+i));
    }
    return A;
}

void in_day(int *A, int N) {
    int i;
    for(i = 0; i < N; i++) {
        printf("%d\t", A[i]);
    }
}

void trao(int *x, int *y) {
    int tg = *x;
    *x = *y;
    *y = tg;
}

void sap_xep(int *A, int N) {
    int i, j;
    for(i = 0; i < N-1; i++) {
        for(j = i+1; j < N; j++) {
            if(A[i] > A[j]) {
                trao(&A[i], &A[j]);
            }
        }
    }
}

int main() {
    int n, *a;
    puts("Nhap vao so phan tu: "); scanf("%d", &n);
    a = nhap_day(n);
    sap_xep(a, n);
    puts("Day sau khi da sap xep la: ");
    in_day(a, n);
    free(a);
    return 0;
}