#include<stdio.h>
void main() {
	int a[3][4]= {    //����ũ�� 3, ����ũ�� 4 int�� 2���� �迭 ����
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};
	//printf("%d\n", sizeof(a));    //48
	int col = sizeof(a[0]) / sizeof(int);  //����ũ��
	//����ũ�� ���Ҷ��� ���� ������ ũ�⸦ ����� ũ��� ������
	int row = sizeof(a) / sizeof(a[0]);   //����ũ��  
	//����ũ�� ���Ҷ��� �迭�� �����ϴ� ��ü ������ ���� ������ ũ��� ������
	 
	/*printf("%d\n", col);
	printf("%d\n", row);*/

	//�ݺ������� 2���� �迭�� ��� ��� ���
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\n", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}