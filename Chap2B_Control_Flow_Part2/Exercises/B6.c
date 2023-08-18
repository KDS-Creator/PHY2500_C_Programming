/*===== Cho lượng dân số của một nước là n, tỉ lệ tăng dân số của nước đó là m%/năm. Tính dân số nước đó sau k
năm (làm tròn). =====*/

#include <stdio.h>
#include <math.h>

int main() {
    int k;
	float n, m;
	scanf("%f%f%d",&n,&m,&k);
	for(int i = 1; i <= k; i++) {
		n = n * (1+m/100);
	}
	printf("%.0f",round(n));
}