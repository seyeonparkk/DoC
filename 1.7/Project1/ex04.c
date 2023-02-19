#include<stdio.h>
void main() {
	int a[3][4]= {    //세로크기 3, 가로크기 4 int형 2차원 배열 선언
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};
	//printf("%d\n", sizeof(a));    //48
	int col = sizeof(a[0]) / sizeof(int);  //가로크기
	//가로크기 구할때는 가로 한줄의 크기를 요소의 크기로 나눠줌
	int row = sizeof(a) / sizeof(a[0]);   //세로크기  
	//세로크기 구할때는 배열이 차지하는 전체 공간을 가로 한줄의 크기로 나눠줌
	 
	/*printf("%d\n", col);
	printf("%d\n", row);*/

	//반복문으로 2차원 배열의 모든 요소 출력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\n", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}