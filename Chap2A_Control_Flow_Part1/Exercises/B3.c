/*=====
    Cho một số nguyên x. Hãy xác định xem x có phải là số chính phương không.
=====*/

#include <stdio.h> 
#include <math.h>

int main() {
    int x;
    scanf("%d", &x);

    int y = sqrt(x);

    if(y * y == x) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    printf("\n======================\n");
    printf("Finish Program !\n");
    return 0;
}