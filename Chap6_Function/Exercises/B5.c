/*=====
    Cho một đa giác lồi có n đỉnh có tọa độ (xi

, yi) với i = 1..n. Tính diện tích đa giác.
=====*/

#include <stdio.h>
#include <math.h>

void input_coord(int n, int a[30],  int b[30]) {
    for(int i = 0; i < n; i++) {
        scanf("%d%d", &a[i], &b[i]);
    }
}

double dttg(int x1, int y1, int x2, int y2, int x3, int y3) {
    return (double)1/2 * fabs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
}

double dtdg(int n, int x[30], int y[30]) {
    double s = 0;
    for(int i = 0; i < n-2; i++) {
        s += dttg(x[0], y[0], x[i+1], y[i+1], x[i+2], y[i+2]);
    }
    return s;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("\n==================\n");
    int x[30], y[30];
    input_coord(n, x, y);
    printf("\n==================\n");
    double s = dtdg(n, x, y);
    printf("%lf", s);
    printf("\n==================\n");
    return 0;
}