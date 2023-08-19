/*=====
    Cho một mảng có n phần tử. Hãy cấp phát thêm bộ nhớ cho mảng đó: từ n ô nhớ cho n phần tử tăng lên
    thành 2n ô nhớ cho 2n phần tử. Sau đó, mỗi phần tử của mảng ban đầu sẽ có thêm một bản sao có vị trí
    ngay sát phần tử đó trong mảng. In ra mảng đó sau khi thực hiện các thao tác trên.
=====*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *a;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\n======================\n");
    // Cap phat bo nho dong cho mang
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
        // Tao mang theo yeu cau de bai
        a = (int*)realloc(a, 2*n);
        for(int i = n-1; i >= 0; i--) {
            *(a+2*i+1) = *(a+i);
            *(a+2*i) = *(a+i);
        }
        // In ra man hinh mang moi
        for(int i = 0; i < 2*n; i++) {
            printf("%d ", *(a+i));
        }
    }
    printf("\n======================\n");
    // Giai phong mang
    free(a);
    return 0;
}