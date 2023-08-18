/*===== Cho n là số lớp lá của cây thông Noel. In ra một cây thông Noel có đúng n lớp lá. =====*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // Than cay
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2*n-1; j++) {
            if(j > n-i && j < n+i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    // Goc cay
    for(int i = 1; i <= 2*n+1; i++) {
        if(i >= n-1 && i <= n+1) {
            printf("|");
        }
        else {
            printf(" ");
        }
    }
    printf("\n===========================\n");
    return 0;
}