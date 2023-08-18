/*===== Cho một số nguyên dương n. Kiểm tra xem n có phải là một số nguyên tố hay không.
In ra “YES” nếu n là số nguyên tố, ngược lại thì in ra “NO”. =====*/

#include <stdio.h>

int main() {
    int n, check = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 2; i <= n-1; i++) {
        if(n % i == 0) {
            check++;
            break;
        }
    }
    if(check == 1) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    printf("\n========================\n");
    printf("Ket thuc chuong trinh !\n");
    return 0;
}