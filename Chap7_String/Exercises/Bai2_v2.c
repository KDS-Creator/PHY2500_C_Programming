#include <stdio.h>
#include <string.h>

int main() {
	char s[100], s1[100];
	gets(s);
	
	int low = 0, high = strlen(s) - 1;
	while(low < high) {
		char temp = s[low];
		s[low] = s[high];
		s[high] = temp;
		low++;
		high--;
	}
	
	strcpy(s1, s);
	
	int cmp = strcmp(s, s1);
	if(cmp == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}