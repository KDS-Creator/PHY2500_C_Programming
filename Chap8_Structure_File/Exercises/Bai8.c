#include <stdio.h>
#include <math.h>

typedef struct {
	float x;
	float y;
}point;

typedef struct {
	point vertice[100];
	int n;
}polygon;

float distance(point A, point B) {
	return sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
}

int main() {
	polygon A;
	scanf("%d", &A.n);
	int i;
	for(i = 0; i < A.n; i++) {
		scanf("%f%f", &A.vertice[i].x, &A.vertice[i].y);
	}
	
	float d = 0;
	for(i = 0; i < A.n-1; i++) {
		d += distance(A.vertice[i], A.vertice[i+1]);
	}
	d += distance(A.vertice[A.n-1], A.vertice[0]);
	
	printf("%f",d);
	
	return 0;
}
