/*=====
    Ta biết hàm rand của thư viện stdlib trả về một số nguyên (giả) ngẫu nhiên trong khoảng từ 0 đến
RAND_MAX (thường là 32767). Sử dụng hàm rand này, hãy lập một hàm trả về một số ngẫu nhiên trong
khoảng [a, b] với a, b nguyên dương cho trước.
=====*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_Random_Number(int a, int b) {
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int range = b - a + 1;
    int random_num = a + rand() % range;
    return random_num;
}

int main() {
    // Khoi tao seed cho ham rand dua tren thoi gian hien tai
    srand(time(NULL));

    int a, b;
    scanf("%d%d", &a, &b);
    printf("\n=========================\n");
    int random_result = get_Random_Number(a, b);
    printf("So ngau nhien trong khoang [%d, %d]: %d", a, b, random_result);
    printf("\n=========================\n");
    return 0;
}