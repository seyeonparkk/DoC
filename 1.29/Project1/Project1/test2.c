#include<stdio.h>


int main() {
	char* arps[] = { "영국","칠레","헝가리","오스트레일리아","베트남" };
	for (int i = 0; i < 5; i++) {
		printf("%s", arps[i]); 
	}

	return 0;
}
