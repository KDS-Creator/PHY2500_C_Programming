/*===== Nhap 2 so, so sanh va in thong bao ra man hinh =====*/
#include <stdio.h>

int main() {
    int a, b; // Khai bao bien a va b
    printf("Nhap vao so a: ");
    scanf("%d", &a); // Nhap gia tri a
    printf("Nhap vao so b: ");
    scanf("%d", &b); // Nhap gia tri b

    if(a > b) {
        printf("a lon hon b.\n");
    }
    else if(a < b) {
        printf("a nho hon b.\n");
    }
    else {
        printf("a bang b.\n");
    }
    
    return 0;
}