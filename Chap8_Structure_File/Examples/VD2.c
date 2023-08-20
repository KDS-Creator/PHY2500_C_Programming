# include <stdio.h>

int main() {
	int i, n;
	int ns[20];
	char ht[20][100];
	float dtb[20];
	
	// Doc thong tin
	FILE *f = fopen("data_input.txt", "r");
	fscanf(f, "%d%*c", &n);
	for(i = 0; i < n; i++) {
		fscanf(f, "%25[^\n]", ht[i]);
		fscanf(f, "%d", &ns[i]);
		fscanf(f, "%f%*c", &dtb[i]);
	}
	fclose(f);
	
	// In ra thong tin da doc
	printf("----------Thong tin sinh vien----------\n");
	printf("%-25s%-9s%s\n", "Ho va ten", "Nam sinh", "Diem");
	for(i = 0; i < n; i++) {
		printf("%-25s%-9s%.2f\n", ht[i], ns[i], dtb[i]);
	}
	return 0;
}
