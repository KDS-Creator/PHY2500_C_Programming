/*===== Kiểm tra mật khẩu =====*/

#include <stdio.h>
#define PASSWORD 123456

int main() {
    int a;
    do {
        printf("Nhap vao mat khau wifi: ");
        scanf("%d", &a);
    }while(a != PASSWORD);

    printf("\nBan da nhap dung mat khau!");
    printf("\nLuot Web thoi! :))\n");
    return 0;
}