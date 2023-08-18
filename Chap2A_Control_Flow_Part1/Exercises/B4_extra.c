/*=====
    Trả lời xem nếu là tam giác thì tam giác đó là tam giác gì?
=====*/

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a+b>c && b+c>a && c+a>b) {
        if((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b)) {
            printf("Tam giac vuong !");
        }
        else if(a==b || b==c || c==a) {
            printf("Tam giac can !");
        }
        else {
            printf("Tam giac deu !");
        }
    }
    else {
        printf("Khong phai 3 canh tam giac !");
    }

    printf("\n===================\n");
    printf("Ket thuc chuong trinh\n");
    return 0;
}