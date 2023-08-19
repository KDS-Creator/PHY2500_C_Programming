/*=====
    Thay đổi dữ liệu của các biến bằng con trỏ
=====*/

#include <stdio.h>
int main() {
    int x = 1789, y = 1776; // khoi tao gia tri ban dau cho x va y
    int *VN; // Khai bao con tro VN
    printf("Gia tri ban dau cua x la: %d\n", x);
    printf("Gia tri ban dau cua y la: %d\n", y);
    VN = &x; // Tro VN vao vung nho cua bien x;
    *VN = 1954; // Thay doi gia tri cua bien x thong qua con tro VN
    // ->Thay gia tri 1954 vao vung nho ma VN tro den

    printf("\nGia tri cua x sau khi bi con tro VN doi la: %d\n", x);
    printf("Du lieu tai vung nho ma VN tro den la: %d\n", *VN);
    VN = &y; // Tro VN vao vung nho cua bien y;
    *VN = 1975; // Thay doi gia tri cua bien y thong qua con tro VN
    // ->Thay gia tri 1975 vao vung nho ma VN tro den

    printf("\nGia tri cua y sau khi bi con tro VN doi la: %d\n", y);
    printf("Du lieu tai vung nho ma VN tro den la: %d\n", *VN);
    return 0;
}