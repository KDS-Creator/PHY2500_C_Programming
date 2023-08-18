/*===== Nhập 10 số và tính tổng, nếu số âm thì không tính =====*/

#include <stdio.h>

int main() {
    int i;
    float num, s = 0.0;

    for(i = 1; i <= 10; i++) {
        printf("Nhap vao so thu %d: ", i);
        scanf("%f", &num);
        if(num < 0.0) {
            continue;
        }
        s += num;
    }

    printf("Tong la: %f\n", s);
    return 0;
}