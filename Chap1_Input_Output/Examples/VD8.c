// Tinh tong cua 2 so bat ky nhap tu ban phim

#include <stdio.h>

int main() {
    float a, b;
    float s;
    printf("Nhap vao so a: ");
    scanf("%f", &a);
    printf("Nhap vao so b: ");
    scanf("%f", &b);
    s = a + b;
    printf("Tong cua 2 so la: %f\n", s);
    return 0;
}