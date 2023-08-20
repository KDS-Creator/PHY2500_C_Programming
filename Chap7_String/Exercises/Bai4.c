#include <stdio.h>
#include <string.h>

void delete_first(char x[]) {
	int i = 0;
	while((x[i]== ' ') && (i < strlen(x))) {
		i++;
	}
	strcpy(&x[0], &x[i]);
}

void delete_mid(char x[]) {
	int i = 0, k = 0;
	while(x[i] != '\0') {
		if(!((x[i] == ' ') && (x[i+1] == ' '))) {
			x[k] = x[i];
			k++;
		}
		i++;
	}
	x[k] = '\0';
}

void delete_tail(char x[]) {
	int n = strlen(x);
	while(x[n-1] == ' ') {
		x[n-1] = '\0';
	}
}

int main() {
	char x[100];
	gets(x);
	
	delete_first(x);
	delete_mid(x);
	delete_tail(x);
	
	puts(x);
	return 0;
}