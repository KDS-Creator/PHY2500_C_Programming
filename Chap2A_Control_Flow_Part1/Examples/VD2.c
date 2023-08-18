/*===== Nhap 3 so, doi chieu voi gia tri co san va in ra thong bao =====*/
#include <stdio.h>

int main() {
    int x;
    printf("Nhap vao so 1, 2 hoac 3: ");
    scanf("%d", &x); // Nhap gia tri cua x
    switch(x) {
        case 1: printf("Day la so MOT\n"); break;
        case 2: printf("Day la so HAI\n"); break;
        case 3: printf("Day la so BA\n"); break;
        default: printf("Gia tri x khong hop le\n");
    }
    printf("Ket thuc chuong trinh \n");
    return 0;
}