#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(NULL));
	int t=0;
	char yn;
	int num=5;
	int cnt = 0;
	int a, b,res;
	a = (rand() % 9)+1; 
	b = (rand() % 9) + 1;
	printf("%d + %d = ", a, b);
	scanf_s("%d", &res);
	while (1) {
		if (a + b == res) {
			printf("�����մϴ� �����Դϴ�\n");
			cnt += 1;
			printf("���� %d ������ ������ϴ�\n", cnt);
			if (num<cnt) {
				printf("�ܰ踦 �ø��ðڽ��ϱ�? y/n \n");
				scanf_s("%s", &yn);
				t += 1;
				printf("%d�ܰ�", t);
				if (yn == 'y') {
					a += 5;
					b += 5;
					if (t == 5)
						printf("�� ���� 5�ܰ� ��� ����� �ɷ���");
				}
				else {
					exit(0);
				}
			}
		}
		else {
			printf("�� �� �����ؿ� ������ %d �����ϴ�", (a + b));
		}
		
	}
	

	
	
}