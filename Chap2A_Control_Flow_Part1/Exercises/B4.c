/*=====
    Cho ba số nguyên a, b, và c. Hãy xét xem 3 số này có là số đo ba cạnh của một tam giác không.
=====*/

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a+b>c && b+c>a && c+a>b) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    printf("\n=================\n");
    printf("Finish Program!\n");
    return 0;
}