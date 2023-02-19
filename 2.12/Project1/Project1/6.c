#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int stack[10];
int top;

void init_stack()
{
	top = -1;
}
void push(int val1)
{
	if (top >= 9)
		printf("\n######## 스택이 꽉 차버렸네요 ########\n");
	else
		stack[++top] = val1;
}
void pop()
{
	if (top < 0)
		printf(" ########## 더이상 비울 스택이 없습니다 ###########n");
	else
		--top;
}
void print_stack()
{
	int i;
	printf("스택 top --------------------- buttomn\n");

	for (i = top; i >= 0; i--)
		printf("%d ", stack[i]);
	printf("\n");
}
void main()
{
	printf(" 배열을 이용한 스택 프로그램 입니다 \n");
	int select_num;
	int push_num;
	int exit_flag = 0;

	init_stack();

	while (1) {
		printf(" 1) push  2) pop  3) data print 4) Quit! \n");
		printf(" 숫자를 선택해주세요 : ");
		scanf("%d", &select_num);
		if (select_num > 3)
			break;
		else {
			switch (select_num)
			{
			case 1:
				printf("푸쉬 숫자를 입력=>");
				scanf("%d", &push_num);
				push(push_num);
				printf("푸쉬(push)를 실행 했습니다");
				break;
			case 2:
				pop();
				printf("팝 실행");break;
			case 3:
				print_stack();
				break;
			}
		}
	}
	printf("프로그램을 종료합니다\n");
	getch();
}
	​