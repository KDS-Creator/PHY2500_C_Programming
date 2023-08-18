#include <stdio.h>
#define M_PI 3.14

int main() {
    float r;
    scanf("%f", &r);
    float dt = 4 * M_PI * r * r;
    float tt = 4 * M_PI * r * r * r / 3;
    printf("%.3f\n%.3f", dt, tt);
    return 0;
}