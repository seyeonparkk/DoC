#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union box {   //공용체 정의
	short candy;
	float snack;
	char doll[8];
};
int main() {
	union box* b1 = malloc(sizeof(union box));
	printf("%d", sizeof(union box));

	strcpy(b1->doll, "bear");
	printf("%d", b1->candy);
	printf("%d", b1->snack);
	printf("%d", b1->doll);
	free(b1);
	return 0;
}