#include <stdio.h>
#include <string.h>

int main() {
	char xau_1[] = "Bo mon";
	char xau_2[] = " Tin hoc Vat ly";
	char xau_3[100];
	
	strcpy(xau_3, xau_1);
	puts(xau_3);
	strcat(xau_3, xau_2);
	puts(xau_3);
	return 0;
}