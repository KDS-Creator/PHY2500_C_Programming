/*=====
    Cho ma trận A có m hàng và n cột. Lập một hàm thực hiện phương pháp khử Gauss-Jordan (không tráo
hàng) lên ma trận A rồi trả về ma trận dạng bậc thang rút gọn sau khi đã khử xong.
=====*/

#include <stdio.h>
#include <stdlib.h>

/*===== Nhap ma tran =====*/
void nhap_matrix(float *a, int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			scanf("%f",(a+i*n+j));
		}
	}
}

/*===== Xuat ma tran =====*/
void xuat_matrix(float *a, int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			printf("%.2f ", *(a+i*n+j));
		}
		printf("\n");
	}
}

/*===== Khu Gauss Jordan =====*/
void Gauss_Jordan(float *a, int m, int n) {
	int i, j, k;
	float p;
	int min_idx = (m+1>n)?n+1:m;
	for(k = 0; k < min_idx-1; k++) {
		for(i = k; i < m; i++) {
			if(i != k) {
				p = *(a+i*(min_idx-1)+k)/(*(a+k*(min_idx-1)+k));
				for(j = k; j < n; j++) {
					*(a+i*n+j) -= p*(*(a+k*n+j));
				}
			}
		}
	}
}

/*===== Ham Main =====*/
int main() {
	int m, n; // Khoi tao hang va cot
	float *a;
	// Nhap hang va cot 
	scanf("%d%d",&m,&n);
	printf("\n--------------------\n");
	// Cap phat bo nho cho con tro
	a = (float*)malloc(m * n * sizeof(float));
	if(a == NULL) exit(1);
	// Nhap ma tran 
	nhap_matrix(a, m, n);
	printf("\n--------------------\n");
	// Khu Gauss_Jordan va in ra ma tran 
	Gauss_Jordan(a, m, n);
	xuat_matrix(a, m, n);
	printf("\n--------------------\n");
	// Giai phong bo nho 
	free(a);
	return 0;
}