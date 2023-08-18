/*===== Cho 4 số nguyên a, b, c, và d. Tìm giá trị nhỏ nhất và giá trị lớn nhất của bốn số đó. =====*/
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int max = a, min = a;
    // tim max
    if(max < b) max = b;
    if(max < c) max = c;
    if(max < d) max = d;
    // Tim min
    if(min > b) min = b;
    if(min > c) min = c;
    if(min > d) min = d;
    // In ra man hinh ket qua
    printf("Min: %d, Max: %d\n", min, max);
    return 0;
}