#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	char s[100][100];
	int i, n;
	strcpy(s[0], "A");
	strcpy(s[1], "B");
	
	scanf("%d", &n);
	for(i = 2; i <= n; i++) {
		strcpy(&s[i], &s[i-1]);
		strcat(&s[i], &s[i-2]);
	}
	
	puts(s[n]);
	return 0;
}