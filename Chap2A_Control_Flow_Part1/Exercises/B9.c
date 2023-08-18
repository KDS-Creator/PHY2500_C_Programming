/*=====
    Lần lượt nhập vào ngày tháng năm sinh của 2 anh em Wilbur và Orville. Nếu Wilbur là anh thì hãy in ra
“WILBUR IS THE ELDER BROTHER”, nếu không, in ra “ORVILLE IS THE ELDER BROTHER”
=====*/

#include <stdio.h>

int main() {
    int o_d, o_m, o_y; // day, month and year of Orville
    int w_d, w_m, w_y; // day, month and year of Wilbur
    printf("Enter Wilbur date of birth: ");
    scanf("%d%d%d", &w_d, &w_m, &w_y);
    printf("Enter Orville date of birth: ");
    scanf("%d%d%d", &o_d, &o_m, &o_y);

    if(o_y > w_y) {
        printf("WILBUR IS THE ELDER BROTHER");
    }
    else if(o_y < w_y) {
        printf("ORVILLE IS THE ELDER BROTHER");
    }
    else {
        if(o_m > w_m) {
            printf("WILBUR IS THE ELDER BROTHER");
        }
        else if(o_m < w_m) {
            printf("ORVILLE IS THE ELDER BROTHER");
        }
        else {
            if(o_d > w_d) {
                printf("WILBUR IS THE ELDER BROTHER");
            }
            else if(o_d < w_d) {
                printf("ORVILLE IS THE ELDER BROTHER");
            }
            else {
                printf("Same date of birth ! Not valid to classify who is elder");
            }
        }
    }

    printf("\n=======================\n");
    printf("Ket thuc chuong trinh !\n");
    return 0;
}