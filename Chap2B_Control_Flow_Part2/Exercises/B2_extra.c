/*===== Tìm tất cả các số nguyên tố n nằm trong khoảng [N1, N2] với 0 ≤ N1, N2 ≤ 10^9 =====*/

#include <stdio.h>

int main() {
    int N1, N2;
    scanf("%d%d", &N1, &N2);

    int n, i;

    for(n = N1; n <= N2; n++) {
        int check = 0;
        for(i = 2; i <= n-1; i++) {
            if(n % i == 0) {
                check++;
                break;
            }
        }
        if(check == 0) {
            printf("%d ", n);
        }
    }
    printf("\n==================\n");
    return 0;
}