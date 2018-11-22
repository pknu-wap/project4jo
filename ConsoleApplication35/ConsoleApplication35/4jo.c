#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13

void pntcolor();
void printgoto(int x, int y, char str[]);
void Movearrow(int key);
void gotoxy(int x, int y);
void printface();
void singleplay();
void multplay();
void showrank();
void backgroundmusicoption();
void gamef1();
void CursorView(char show);
int y = 10;
void pntcolor()
{
	int i;

	for (i = 0; i <= 15;i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
		gotoxy(37, 13);
		printf("☆★☆★☆★ 게 임 시 작 ☆★☆★☆★");
		Sleep(50);
		system("cls");

	}
}
void printgoto(int x, int y, char str[])
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	printf("%s", str);
}
void CursorView(char show)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}
void printface()
{
	printgoto(35, 5, "☆★☆★☆★☆★ 게 임 시 작 ☆★☆★☆★☆★");
	printgoto(42, 10, "        [ 같 이 하 기 ]");
	printgoto(42, 12, "        [ 혼 자 하 기 ] ");
	printgoto(42, 14, "        [ 기 록 보 기 ]");
	printgoto(42, 16, "        [ 환 경 설 정 ]");
	printgoto(42, 18, "        [ 게 임 설 명 ]");
	printgoto(42, 20, "        [ 종 료 하 기 ]");
}
void Block_Board() {
	int i=1;
	while (i <= 54) {
		printgoto( i, 0, "▩");//윗벽
		printgoto(i, 34, "▩");//아랫벽
		i = i + 2;
	}
	int j = 0;
	while (j <= 32) {
		j++;
		printgoto(1, j, "▩");//좌측벽
		printgoto(53, j, "▩");//우측벽
	}
}
void Movearrow(int key)
{
	{
		switch (key)
		{
		case UP:
			if (y>10)
			{
				printgoto(42, y, "  ");
				y -= 2;
				printgoto(42, y, "▶");
			}
			break;

		case DOWN:

			if (y<20)
			{
				printgoto(42, y, "  ");
				y += 2;
				printgoto(42, y, "▶");
			}
			break;

		case ENTER:

			if (y == 10)
			{
				system("cls");
				singleplay();
			}
			else if (y == 12)
			{
				system("cls");
				multplay();
			}
			else if (y == 14)
			{
				system("cls");
				showrank();
			}
			else if (y == 16)
			{
				system("cls");
				backgroundmusicoption();
			}
			else if (y == 18)
			{
				system("cls");
				gamef1();
			}
			else if (y == 20)
			{
				exit(1);
			}
			break;
		}
	}
}
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//시작//
void singleplay()
{
	Sleep(100);
	printf("ㅎㅇ");
	Block_Board();


	Sleep(1000);
	system("cls");
	printface();
}
void multplay()
{
	Sleep(100);
	printf("qㅂㅂ");
	Block_Board();


	Sleep(1000);
	system("cls");
	printface();
}

void showrank()
{
	Sleep(100);
	printf("헤헤헤");



	Sleep(1000);
	system("cls");
	printface();
}
void backgroundmusicoption()
{
	Sleep(100);
	int n;
	printgoto(42, 5, "^-^ 배   경   음    악    설   정 ^-^");
	printgoto(42, 10, "  1.    [ 배 경 음 악 끄 기 ]");
	printgoto(42, 12, "  2.    [ 배 경 음 악 켜 기 ]");
	printgoto(42, 16, "  ※  원 하 는 번 호 를 입 력 하 시 오. ");
	scanf_s("%d", &n);
	if (n == 1)
	{
		PlaySound(NULL, NULL, NULL);
	}
	else if (n == 2)
	{
		PlaySound(TEXT("text.wav"), NULL, SND_ASYNC | SND_LOOP);
		Sleep(500);
	}
	Sleep(500);
	system("cls");
	printface();
}
void gamef1()
{
	Sleep(100);
	printf("게임설명\n");



	Sleep(1000);
	system("cls");
	printface();
}


int main()
{
	system("title 프로젝트4조 벽트리스!");
	CursorView(0);
	pntcolor();
	PlaySound(TEXT("text.wav"), NULL, SND_ASYNC | SND_LOOP);
	printface();
	int key;
	while (1)
	{
		if (kbhit())
		{
			key = getch();
			Movearrow(key);

		}
	}

}