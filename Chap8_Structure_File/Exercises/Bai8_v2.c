#include <stdio.h>
#include <math.h>

typedef struct {
	float x, y;
}point;

int main() {
	point a[20];
	int i, n;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%f%f", &a[i].x, &a[i].y);
	}
	
	float s = 0;
	for(i = 0; i < n-1; i++) {
		s += sqrt((a[i+1].x - a[i].x)*(a[i+1].x-a[i].x) + (a[i+1].y-a[i].y)*(a[i+1].y-a[i].y));
	}
	s += sqrt((a[n-1].x-a[0].x)*(a[n-1].x-a[0].x) + (a[n-1].y-a[0].y)*(a[n-1].y-a[0].y));
	printf("%f",s);
	return 0;
}
