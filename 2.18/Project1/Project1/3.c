#include<stdio.h>
typedef struct {

	int xpos, ypos;
}point;
void swappoint(point* ptr1, point* ptr2);

int main(void) {
	point position1 = { 3,6 };
	point position2 = { 4,9 };
	swappoint(&position1, &position2);
	printf("%d %d\n",position1.xpos, position1.ypos);
	printf("%d %d", position2.xpos, position2.ypos);
}
void swappoint(point* ptr1, point* ptr2) {
	point tmp;
	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}