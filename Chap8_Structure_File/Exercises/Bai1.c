#include <stdio.h>

int main() {
	int i, n;
	int ns[20]; // Nam sinh
	char ht[20][100]; // Ho ten
	float dtb[20]; // Diem trung binh
	
	// Doc vao thong tin sinh vien tu file "data_input.txt"
	FILE *f = fopen("data_input.txt","r");
	fscanf(f, "%d%*c", &n);
	
	for(i = 0; i < n; i++) {
		fscanf(f, "%25[^\n]", ht[i]);	// Doc vao ho ten
		fscanf(f, "%d", &ns[i]);		// Doc vao nam sinh
		fscanf(f, "%f%*c", &dtb[i]);	// Doc vao diem trung binh
	}
	fclose(f); // Ket thuc doc file
	
	// Ghi file ra "data_output.txt"
	f = fopen("data_output.txt", "w");
	fprintf(f, "%d\n", n); // Ghi ra so sinh vien
	for(i = 0; i < n; i++) {
		fprintf(f, "%-25s%-9d%.2f\n", ht[i], ns[i], dtb[i]);
	}
	fclose(f); // Ket thuc viec ghi vao file
	return 0;
}
