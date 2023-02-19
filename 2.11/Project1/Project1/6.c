#include<stdio.h>
//#include<cursor.h>
#include<conio.h>
enum{ESC=27,LEFT=75,RIGHT=77,DOWN=80};
#define putchxy(x,y,c){goto(x,y);putch(c);}
#define putchxy(x,y,s){goto(x,y);putch(s);}
char arStage[18][21] = {

"####################",
"####################",
"####################",
"#####   ############",
"#####O  ############",
"#####  O############",
"###  O O ###########",
"### # ## ###########",
"#   # ## #####  ..##",
"# O  O   @      ..##",
"##### ### # ##  ..##",
"#####     ##########",
"####################",
"####################",
"####################",
"####################",
"####################",
"####################"
};
char ns[18][21];
int nx, ny;
int main()
{

	int ch;

	int x, y;

	int dx, dy;

	BOOL bEnd;

	​

		// 게임판 초기화

		showcursor(FALSE);

	memcpy(ns, arStage, sizeof(ns));

	for (y = 0; y < 18; y++) {

		for (x = 0; x < 20; x++) {

			// 주인공의 위치 찾아 놓는다.

			if (ns[y][x] == '@') {

				nx = x;

				ny = y;

				ns[y][x] = ' ';

			}

		}

	}

	​

		clrscr();

	putsxy(45, 2, "SOKOBAN");

	putsxy(45, 4, "ESC:종료");

	​

		for (;;) {

			for (y = 0; y < 18; y++) {

				putsxy(0, y, ns[y]);

			}

			putchxy(nx, ny, '@');

		}
	
	ch = getch();

	if (ch == 0xE0 || ch == 0) {

		ch = getch();

		dx = dy = 0;

		switch (ch) {

		case LEFT:

			dx = -1;

			break;

		case RIGHT:

			dx = 1;

			break;

		case UP:

			dy = -1;

			break;

		case DOWN:

			dy = 1;

			break;

		}

		​

			​

	}

