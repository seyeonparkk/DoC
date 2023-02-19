#include<stdio.h>
int main() {
	int a[] = { 1,2,3 };
	int* vp = a;

	/*for (int i = 0; i < 5; i++) {
		printf("%d", *ptr);
	}*/

	/*int sum = 0;
	while (*ptr)
		sum += *ptr++;
	printf("sum=%d", sum);*/

	vp=(int*)vp +1;
	printf("%d", *(int *)vp);

	/*int* p1, * p2, * p3;
	p1 = &a[0];
	p2 = &a[4];
	p3=p1 + (p2 - p1) / 2;

	printf("중간요소 %d", *p3);*/
}