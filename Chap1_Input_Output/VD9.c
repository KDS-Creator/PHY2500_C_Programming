// Tinh dien tich va chu vi hinh tron
#include <stdio.h>
#include <math.h>

int main() {
    float R, cv, dt;
    puts("Nhap ban kinh cua hinh tron: ");
    scanf("%f", &R);
    cv = 2 * 3.14 * R;
    dt = 3.14 * R * R;
    printf("Chu vi=%f\nDien tich=%f", cv, dt);
    return 0;
}