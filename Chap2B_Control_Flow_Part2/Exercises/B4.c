/*
    Giải bài toán dân gian sau:

    Vừa gà vừa chó
    Bó lại cho tròn
    Ba mươi sáu con
    Một trăm chân chẵn
    Hỏi mấy gà, mấy chó?
*/

#include <stdio.h>

int main() {
    int ga, cho;
    for(ga = 0; ga <= 36; ga++) {
        for(cho = 0; cho <= 36; cho++) {
            if((ga+cho==36) && (2*ga+4*cho==100)) {
                printf("Ga: %d con, Cho: %d con", ga, cho);
            }
        }
    }
    printf("\n====================\n");
    printf("Ket thuc chuong trinh !");
    return 0;
}