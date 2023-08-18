/*===== Trung bình cộng của n số nguyên =====*/

#include <stdio.h>

int main() {
    int i, n, sum = 0, a[20];

    printf("Nhap n: "); scanf("%d", &n);

    printf("\n===================\n");

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("\n===================\n");
    printf("Trung binh cong: %.3f\n", (float)sum/n);
    printf("\n===================\n");
    return 0;
}