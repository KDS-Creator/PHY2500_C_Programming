/*=====
    Cho ba số thực a, b, và c. Lập hàm tìm các nghiệm thực x1 và x2 (x1 ≤ x2) của phương trình ax2 +bx+c = 0.
Hàm này trả về 3 giá trị: flag, x1, và x2, trong đó flag có giá trị 0, 1, 2, hoặc 3 lần lượt tương ứng với các
trường hợp phương trình vô nghiệm, nghiệm kép, hai nghiệm riêng biệt, hoặc vô số nghiệm; x1 và x2 là các
nghiệm của phương trình. Khi phương trình vô nghiệm hoặc vô số nghiệm, x1 = x2 = 0.
=====*/

#include <stdio.h>
#include <math.h>

int GIAI_PTB2(float a, float b, float c, float *x1, float *x2) {
    float delta;
    int flag;
    if(a != 0) {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            flag = 2;
            *x1 = (-b-sqrt(delta)) / (2*a);
            *x2 = (-b+sqrt(delta)) / (2*a);
        }
        else if(delta == 0) {
            flag = 1;
            *x1 = *x2 = -b/(2*a);
        }
        else {
            flag = 0;
        }
    }
    else {
        if(b != 0) {
            flag = 1;
            *x1 = -c/b;
        }
        else {
            if(c != 0) {
                flag = 3;
            }
            else {
                flag = 0;
            }
        }
    }

    return flag;
}

int main() {
    float a, b, c, *x1, *x2;
    scanf("%f%f%f", &a, &b, &c);
    printf("\n==================\n");
    int flag = GIAI_PTB2(a, b, c, x1, x2);
    if(flag == 0) printf("%d Vo nghiem!", flag);
    if(flag == 1) printf("%d %f %f", flag, *x1, *x2);
    if(flag == 2) printf("%d %f %f", flag, *x1, *x2);
    if(flag == 3) printf("%d Vo so nghiem!", flag);
    printf("\n==================\n");
    return 0;
}