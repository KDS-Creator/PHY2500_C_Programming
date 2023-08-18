/*=====
    Cho 4 số nguyên a, b, c, và d. Tìm giá trị lớn thứ nhì của bốn số đó.
=====*/

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int min = a, max = a;
    // Tim min
    if(min > b) min = b;
    if(min > c) min = c;
    if(min > d) min = d;
    // Tim max
    if(max < b) max = b;
    if(max < c) max = c;
    if(max < d) max = d;
    // Tim max_2
    int max_2 = min;
    if(max_2 < b && b != max) max_2 = b;
    if(max_2 < c && c != max) max_2 = c;
    if(max_2 < d && d != max) max_2 = d;
    printf("So lon thu 2 : %d\n", max_2);
    printf("\n=======================\n");
    printf("Ket thuc chuong trinh\n");
    return 0;
}