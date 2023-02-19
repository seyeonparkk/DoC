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
			printf("축하합니다 정답입니다\n");
			cnt += 1;
			printf("현재 %d 문제를 맞췄습니다\n", cnt);
			if (num<cnt) {
				printf("단계를 올리시겠습니까? y/n \n");
				scanf_s("%s", &yn);
				t += 1;
				printf("%d단계", t);
				if (yn == 'y') {
					a += 5;
					b += 5;
					if (t == 5)
						printf("총 레벨 5단계 통과 당신은 능력자");
				}
				else {
					exit(0);
				}
			}
		}
		else {
			printf("좀 더 집중해요 정답은 %d 였습니다", (a + b));
		}
		
	}
	

	
	
}