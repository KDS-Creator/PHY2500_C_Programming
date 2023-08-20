#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	gets(s);
	
	char *token = strtok(s, " ");
	
	// Lay ra toan bo token
	while(token != NULL) {
		printf("%s\n", token); // In moi token ra
		token = strtok(NULL, " ");
	}
	return 0;
}