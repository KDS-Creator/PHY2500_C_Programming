/*===== Buộc nhập vào một số luôn lớn hơn không =====*/

#include <stdio.h>

int main() {
    int a; // Khai bao bien a
    printf("Nhap vao so nguyen a: ");
    HUS:    scanf("%d", &a); // Nhap diem
    if(a <= 0) {
        printf("Moi ban nhap lai a !");
        goto HUS; // Nhay den vi tri HUS
    }
    printf("Ban lam rat tot !\n");
    return 0;
}