#include <stdio.h>

int main() {
    float x;
    scanf("%f", &x);
    printf("%f",(x>0)?(x*x):(x+1));
    return 0;
}