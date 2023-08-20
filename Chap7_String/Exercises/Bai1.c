#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char a[100];
	// Nhap xau
	gets(a);
	// Chuan hoa xau
	int i, L = strlen(a);
	for(i = 0; i < L; i++) {
		a[i] = tolower(a[i]);
	}
	
	// Khoi tao mang chua bien dem va so ki tu
	int dem[123];
	int count = 0;
	
	// Khoi tao dem = [0, 0, 0, ...]
	for(i = 0; i < 123; i++) {
		dem[i] = 0;	
	}
	
	for(i = 0; i < L; i++) {
		dem[a[i]]++;
	}
	
	int c;
	for(c = 97; c <= 122; c++) {
		if(dem[c] > 0) {
			count++;
		}
	}
	printf("%d\n",count);
	
	for(c = 97; c <= 122; c++) {
		if(dem[c] > 0) {
			printf("%c %d\n", c, dem[c]);
		}
	}
	return 0;
}