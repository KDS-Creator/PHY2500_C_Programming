#include <stdio.h>
int main() {
	int i, n;
	int ns[20]; // nam sinh
	char ht[20][100]; // ho ten
	float dtb[20]; // diem trung binh
	// Nhap vao thong tin sinh vien
	printf("Nhap vao so sv: "); scanf("%d%*c", &n);
	printf("Nhap thong tin cua %d sv:\n", n);
	for (i = 0; i < n; i++) {
		printf("Ho va ten: "); scanf("%25[^\n]", ht[i]); // hoac:gets(ht[i]);
		printf("Nam sinh: "); scanf("%d", &ns[i]);
		printf("Diem tb: "); scanf("%f%*c", &dtb[i]);
	}
	// Ghi ra thong tin sinh vien vao file "data_output.txt"
	FILE *f = fopen("data_output.txt", "w");
	fprintf(f, "%d\n", n); // Ghi ra so sinh vien
	for (i = 0; i < n; i++)
	fprintf(f, "%-25s%-9d%.2f\n", ht[i], ns[i], dtb[i]); // Ghi ra thong tin tren mot dong
	fclose(f); // Ket thuc viec ghi ra thong tin sinh vien bang cach dongfile
	return 0;
}