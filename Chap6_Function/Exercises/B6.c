/*=====
    Cho n số. Tìm ước chung lớn nhất của n số đó.
=====*/

#include <stdio.h>

// Tim uoc chung lon nhat cua 2 so
int ucln_2_num(int a, int b) {
    while(a != b) {
        if(a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return b;
}

// Tim uoc chung lon nhat n so
int ucln_n_num(int a[30], int n) {
    int i;
    int k = a[0];
    for(i = 1; i < n; i++) {
        k = ucln_2_num(k, a[i]);
    }
    return k;
}

// Nhap n so
void input_matrix(int a[30], int n) {
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

// Ham main
int main() {
    int n, a[30];
    scanf("%d", &n);
    printf("\n==================\n");
    input_matrix(a, n);
    printf("\n==================\n");
    int k = ucln_n_num(a, n);
    printf("%d", k);
    printf("\n==================\n");
    return 0;
}