#include <stdio.h>
#include <string.h>

int main() {
	char s[100]; // Input string
	char *word[100]; // Array pointers
	int word_count = 0; // Count word
	
	gets(s); 
	
	char *token = strtok(s, " ");
	while(token != NULL) {
		word[word_count] = strdup(token);
		word_count++;
		token = strtok(NULL, " ");
	}
	
	// Print save word
	for(int i = 0; i < word_count; i++) {
		printf("%s\n", word[i]);
	}
	return 0;
}