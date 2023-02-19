#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(NULL));
	int m;
	int a;
	
	for (int i = 0; i < 100; i++) {
		a = (rand() % 99) + 1;
		printf("0~99사이의 난수 값 결과");
		printf(a);
	}
	

	free(a);
	
}