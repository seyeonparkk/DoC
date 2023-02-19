#include<stdio.h>
int main(){
	int villa[4][2];
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j< 2; j++) {
			printf("%d 類 %d�� 檣掘熱  : ",i+1,j+1);
			scanf_s("%d", &villa[i][j]);
		}
	}
	 
	for (int i = 0; i <4; i++) {
		for (int j = 0; j < 2; j++) {
			sum += villa[i][0];    
			sum += villa[i][1];
			printf("%d類曖 檣掘熱 : %d\n ", (i + 1),sum);
		}
	}
	return 0;
}