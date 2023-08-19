#include <stdio.h>

int main() {
    int n;
    int f0 = 0, f1 = 1, f = 1;
    printf("Nhap n: "); scanf("%d", &n);
    if(n == 0) {
        f = f0;
        printf("%d", f);
    }
    else if(n == 1) {
        f = f1;
        printf("%d", f);
    }
    else {
        for(int i = 2; i < n; i++) {
            f0 = f1;
            f1 = f;
            f = f0 + f1;
        }
        printf("%d", f);
    }
    printf("\n==================\n");
    return 0;
}