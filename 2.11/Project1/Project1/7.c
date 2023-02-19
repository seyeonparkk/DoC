#include<stdio.h>

int main() {
	FILE* obj;
	obj = fopen("c:\\Temp\\Hello.txt","wt");
	if (obj == NULL) {
		printf("마일이 생성되지 않았습니다 경로나 권한을 살펴보세요");
	}
	else {
		fprintf(obj, "%s", "안녕하세요");
	}
	fclose(obj);
}