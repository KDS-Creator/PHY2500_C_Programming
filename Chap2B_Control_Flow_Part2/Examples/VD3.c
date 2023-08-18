/*===== In ra màn hình ma trận 3 × 3 =====*/

#include <stdio.h>

int a[3][3] = {{2,4,6}, {8,1,3}, {5,7,9}};

int main() {
    int row, col;
    for(row = 0; row <= 2; row++) {
        for(col = 0; col <= 2; col++) {
            printf("%d\t", a[row][col]);
        }
        printf("\n");
    }
    printf("\n================\n");
    printf("Ket thuc chuong trinh");
    return 0;
}