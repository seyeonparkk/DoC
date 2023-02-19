#include<stdio.h>
int main(){
	int arr[3][9];
    //배열에 구구단을 삽입
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 9; j++)
            arr[i][j] = (i + 2) * (j + 1);

    //배열에 저장된 구구단을 출력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}