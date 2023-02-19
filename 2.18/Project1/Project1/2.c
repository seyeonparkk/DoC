#include<stdio.h>
typedef struct {
	
	int x,y;
}point;

typedef struct {

	point* start;
	point* end;
}line;
int main() {
	point p1 = { 10,8 };
	point p2 = { 20,40};
	line line = { &p1,&p2 };
}