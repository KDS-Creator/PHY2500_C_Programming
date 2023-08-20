/*=====
    Cho ma trận vuông A có kích thước n. Lập hàm trả về giá trị định thức của A.
=====*/

#include <stdio.h>
#include <stdlib.h>

/*===== Nhap ma tran =====*/
void nhap(float *a, int n) {
	int i, j;
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			scanf("%f", (a+i*n+j));
		}
	}
}

/*===== Xuat ma tran =====*/
void xuat(float *a, int n) {
	int i, j;
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%.2f ",*(a+i*n+j));
		}
		printf("\n");
	}
}

/*===== Khu Gauss =====*/

/*===== Tinh dinh thuc =====*/
int det(float *a, int n) {
	int i, j, k;
	float p;
	for(k = 0; k < n; k++) {
		for(i = k+1; i < n; i++) {
			p = *(a+i*n+k) / (*(a+k*n+k));
			for(j = k; j < n; j++) {
				*(a+i*n+j) -= p*(*(a+k*n+j));
			}
		}
	}
	float sum = 1;
	for(i = 0; i < n; i++) {
		sum *= *(a+i*n+i);
	}
	return sum;
}


int main() {
	int n;
	float *a;
	// Nhap kich co ma tran
	scanf("%d",&n);
	a = (float*)calloc(n, sizeof(float));
	printf("\n----------------------\n");
	// Nhap ma tran 
	nhap(a, n);
	printf("\n----------------------\n");
	// tinh dinh thuc   
	float s = det(a, n);
	printf("%.2f",s);
	printf("\n----------------------\n");
	free(a);
	return 0;
}