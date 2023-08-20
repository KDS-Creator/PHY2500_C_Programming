#include <stdio.h>
#include <string.h>

int main() {
	char xau_1[] = {'K', 'H', 'T', 'N', '\0'};
	char xau_2[] = "KHTN";
	char *xau_3 = "KHTN";
	
	printf("%s\n", xau_1);
	puts(xau_2);
	int i, L = strlen(xau_3);
	for(i = 0; i < L; i++) {
		putchar(xau_3[i]);
	}
	return 0;
}