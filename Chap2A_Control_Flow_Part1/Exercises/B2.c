/*=====
    Giả sử rằng các số 1, 2, 3, 4, 5, 6, 7 tương ứng là các ngày “SUNDAY”, “MONDAY”, “TUESDAY”, “WEDNES-
    DAY”, “THURSDAY”, “FRIDAY”, “SATURDAY” trong tuần. Viết chương trình nhập vào từ bàn phím một

    số nguyên dương rồi in ra ngày trong tuần tương ứng với số vừa nhập.
    Trong trường hợp số nguyên dương không hợp lệ, hãy in ra dòng chữ “INVALID NUMBER”.
=====*/

#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);

    switch(day) {
        case 1: printf("SUNDAY\n");     break;
        case 2: printf("MONDAY\n");     break;
        case 3: printf("TUESDAY\n");    break;
        case 4: printf("WEDNESDAY\n");  break;
        case 5: printf("THURSDAY\n");   break;
        case 6: printf("FRIDAY\n");     break;
        case 7: printf("SATURDAY\n");   break;
        default: printf("INVALID NUMBER\n");
    }
    printf("\n====================\n");
    printf("Finish Program !\n");
    return 0;
}