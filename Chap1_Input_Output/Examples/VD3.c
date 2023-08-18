#include <stdio.h>

int main() {
    int x = 1945; // Bien kieu nguyen (int)
    printf("\n 1.Gia tri cua x la: "); // THIEU bien, THIEU dac ta
    printf("\n 2.Gia tri cua x la: ", x); // Co bien, THIEU dac ta
    printf("\n 3.Gia tri cua x la: %d ", x); // Cach viet dung
    printf("\n 4.Gia tri cua x la: %d "); // Co dac ta dung, THIEU bien
    printf("\n 5.Gia tri cua x la: %f ", x); // Co bien, SAI dac ta
    printf("\n Ket thuc chuong trinh");
    return 0;
}