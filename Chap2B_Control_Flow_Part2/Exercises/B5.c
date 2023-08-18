/*===== Cho hai số nguyên dương a và b. Tìm ước chung lớn nhất của hai số đó. =====*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int a_ = a, b_ = b;
    while(a != b) {
        if(a > b) a = a - b;
        else {
            b = b - a;
        }
    }

    printf("UCLN(%d,%d) = %d", a_, b_, b);
    printf("\n===========================\n");
    return 0;
}