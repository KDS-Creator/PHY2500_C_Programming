#include <stdio.h>

int main() {
	int a[50];
	int i, n;
	
	FILE *f = fopen("data3.txt","r");
	fscanf(f, "%d", &n);
	
	for(i = 0; i < n; i++) {
		fscanf(f, "%d", &a[i]);
	}
	
	int max = a[0], min = a[0];
	for(i = 1; i < n; i++) {
		if(max < a[i]) max = a[i];
		if(min > a[i]) min = a[i];
	}
	
	printf("%d %d",min,max);
	fclose(f);
	return 0;
}
