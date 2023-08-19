/*=====
    Cho một mảng có n phần tử. Sắp xếp lại các phần tử của mảng đó theo thứ tự tăng dần.
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *a;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n======================\n");
    // Cap phat dong bo nho cho mang
    a = (int*)malloc(n * sizeof(int));
    if(a == NULL) {
        exit(1);
    }
    else {
        // Nhap mang
        for(int i = 0; i < n; i++) {
            scanf("%d", (a+i));
        }
        printf("\n======================\n");
        // Sap xep lai mang
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(*(a+i) > *(a+j)) {
                    int temp = *(a+i);
                    *(a+i) = *(a+j);
                    *(a+j) = temp;
                }
            }
        }
        // In ra mang sau khi sap xep
        for(int i = 0; i < n; i++) {
            printf("%d ", *(a+i));
        }
    }
    printf("\n======================\n");
    // Giai phong mang
    free(a);
    return 0;
}