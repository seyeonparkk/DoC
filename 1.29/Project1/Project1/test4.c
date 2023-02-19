#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct str {
	int x;
	int y;
};
int main() {
	struct str p[3] = { {10,20}, {30,40}, {50,60} };
	struct str* ptr;
	ptr = p;
	
	printf("%d %d",(ptr+1)->x, (ptr + 2)->y);
	return 0;
}