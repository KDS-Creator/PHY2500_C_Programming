/*=====
    Lập hàm tính điểm tổng kết khi biết 3 đầu điểm thành phần
=====*/

#include <stdio.h>

float diem_tongket(float tx, float gk, float ck) {
    float diem = 0.2 * tx + 0.2 * gk + 0.6 * ck;
    return diem;
}

void tinh_diem_tongket(float tx, float gk, float ck, float *diemtk) {
    float diem = 0.2 * tx + 0.2 * gk + 0.6 * ck;
    *diemtk = diem;
}

// Main function
int main() {
    float a, b, c;
    printf("Nhap vao 3 dau diem thanh phan: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("(Cach 1) Diem tong ket la: %f\n", diem_tongket(a, b, c));

    float DiemTK;
    tinh_diem_tongket(a, b, c, &DiemTK);
    printf("(Cach 2) Diem tong ket la: %f\n", DiemTK);
    return 0;
}