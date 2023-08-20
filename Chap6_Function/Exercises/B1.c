/*=====
    Giả sử bạn đang là giáo viên và cần tính điểm điểm tổng kết cho sinh viên của mình. Biết rằng có n sinh viên,
    mỗi sinh viên đã có đủ 3 đầu điểm. Áp dụng ví dụ 1, hãy tính điểm tổng kết cho n sinh viên đó.
=====*/

#include <stdio.h>

float diem_Tk(float cc, float gk, float ck) {
    return 0.2 * cc + 0.2 * gk + 0.6 * ck;
}

int main() {
    int n;
    float a[50], cc, gk, ck;
    printf("Nhap so sinh vien can tinh : ");
    scanf("%d", &n);
    printf("\n====================\n");
    for(int i = 0; i < n; i++) {
        scanf("%f%f%f", &cc, &gk, &ck);
        a[i] = diem_Tk(cc, gk, ck);
    }
    printf("\n====================\n");
    // In ra ket qua cuoi cung
    for(int i = 0; i < n; i++) {
        printf("%.2f\n", a[i]);
    }
    printf("\n====================\n");
}