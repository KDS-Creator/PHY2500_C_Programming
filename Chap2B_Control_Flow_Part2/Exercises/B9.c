/*===== Cho một dãy số nguyên (có số phần tử bất kỳ). Tính tổng các phần tử của dãy số đó. =====*/

#include <stdio.h>

int main() {
    int x, s = 0;
    do {
        scanf("%d", &x);
        s += x;
    } while (x != 0);
    printf("S = %d", s);
    printf("\n==================\n");
    return 0;
}