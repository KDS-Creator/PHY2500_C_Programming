/*===== Sử dụng cấu trúc vòng lặp, in ra tất cả các chữ cái trong bảng chữ cái tiếng Anh. =====*/
#include <stdio.h>

int main() {
    for(char c = 'a'; c <= 'z'; c++) {
        printf("%c ", c);
    }
    printf("\n===================\n");
    printf("Ket thuc chuong trinh !\n");
    return 0;
}