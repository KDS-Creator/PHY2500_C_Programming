/*=====
    Cho ba số thực a, b, và c (−1000 ≤ a, b, c ≤ 1000). Tìm các nghiệm thực x1 và x2 (x1 ≤ x2) của phương trình
    ax2 + bx + c = 0.
    Kết quả làm tròn đến chữ số thập phân thứ 5.
    Nếu phương trình vô nghiệm, in ra dòng chữ “EQUATION HAS NO SOLUTIONS”.
    Nếu phương trình vô số nghiệm, in ra dòng chữ “EQUATION HAS INFINITELY MANY SOLUTIONS”.
=====*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                printf("EQUATION HAS INFINITELY MANY SOLUTIONS");
            }
            else {
                printf("EQUATION HAS NO SOLUTIONS");
            }
        }
        else {
            printf("x = %.3f",-c/b);
        }
    }
    else {
        float d = b*b - 4*a*c;

        if(d > 0) {
            float x1 = (-b+sqrt(d))/(2*a);
            float x2 = (-b-sqrt(d))/(2*a);
            printf("x1 = %.3f, x2 = %.3f", x1, x2);
        }
        else if(d == 0) {
            printf("x1 = x2 = %.3f", -b/(2*a));
        }
        else {
            printf("EQUATION HAS NO SOLUTIONS");
        }
    }

    printf("\n=====================\n");
    printf("Ket thuc chuong trinh!\n");
    return 0;
}