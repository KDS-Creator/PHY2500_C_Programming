/*===== Cho hai số nguyên dương m và n. Hãy in ra một hình chữ nhật gồm m hàng, mỗi hàng có n ký tự, biết rằng
các ký tự ở biên là ‘#’ và các ký tự còn lại là dấu cách. =====*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Nhap m: "); scanf("%d", &m);
    printf("Nhap n: "); scanf("%d", &n);
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if((i == 1 || i == m) || (j == 1 || j == n)) {
                printf("#");
            } 
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}