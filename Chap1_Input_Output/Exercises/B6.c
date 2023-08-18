#include <stdio.h>
#include <math.h>

int main() {
    float x, o, u;
    scanf("%f%f%f", &x, &o, &u);
    float f_x = exp(-pow((x-u)/o, 2)/2) / (o*sqrt(2*3.14));
    printf("%f", f_x);
    return 0;
}