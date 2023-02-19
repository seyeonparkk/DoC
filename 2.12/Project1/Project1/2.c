#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union box {
	short candy;
	float snack;
	char doll[8];
};
int main() {

	union box* b1 = malloc(sizeof(union box));
	printf("%d", sizeof(union box));
	strcpy(b1->doll, "ȫ�浿");
	printf("%s", b1->doll);
	
	
	
	return 0;
}