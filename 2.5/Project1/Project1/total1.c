#include<stdio.h>
#include <math.h>
struct point {
	int x, y;
};

int main() {
	struct point p1;
	struct point p2;
	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	int a = p2.x - p1.x;
	int b = p2.y - p1.y;

	double r = sqrt((a * a) + (b * b));
	printf("%f",r);
}