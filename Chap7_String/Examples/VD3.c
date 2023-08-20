#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char dapan[] = "dennis m. ritchie";
	
	// Viet hoa chu cai dau cua cac tu trong ten
	// Cach 1
	int i, L = strlen(dapan);
	for(i = 0; i < L; i++) {
		if(i == 0 || dapan[i-1] == ' ') {
			dapan[i] = toupper(dapan[i]);
		}
	}
	
	char traloi[100];
	
	do {
		puts("Ai la cha de cua ngon ngu lap trinh C?");
		gets(traloi);
	}while(strcmp(traloi, dapan) != 0);
	
	puts("chinh xac!");
	return 0;
}