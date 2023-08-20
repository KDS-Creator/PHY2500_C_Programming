#include <stdio.h>
#include <string.h>

/*===== Palindrome =====*/
int palindrome(char s[]) {
	int check = 0;
	int i, L = strlen(s);
	for(i = 0; i <= L/2; i++) {
		if(s[i] != s[L-1-i]) {
			check++;
			break;
		}
	}
	return check;
}


int main() {
	char s[100];
	gets(s); // Nhap xau
	
	int x = palindrome(s);
	if(x == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	
	return 0;
}