#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int year;
    gets(name);
    scanf("%d", &year);
    printf("%s %d", name, year);
    return 0;
}