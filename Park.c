#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>
void pntcolor();
void gotoxy(int x, int y);
void printface();
void singleplay();
void multplay();
void showrank();
void backgroundmusic();
void singleplay()
{
	Sleep(100);
	system("cls");
	printf("ㅎㅇ");
}
void multplay()
{
	Sleep(100);
	system("cls");
	printf("qㅂㅂ");
}

void showrank()
{
	Sleep(100);
	system("cls");
	printf("헤헤헤");
}

void backgroundmusic()
{
	Sleep(100);
	system("cls");
	printf("sㄴㄴㄴㄴ");
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
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
void printface()
{
	gotoxy(35, 5);
	printf("☆★☆★☆★☆★ 게 임 시 작 ☆★☆★☆★☆★");
	gotoxy(45, 10);
	printf("1. 같 이 하 기 \n");
	gotoxy(45, 12);
	printf("2. 혼 자 하 기 \n");
	gotoxy(45, 14);
	printf("3. 기 록 보 기 \n");
	gotoxy(45, 16);
	printf("4. 환 경 설 정 \n");
	gotoxy(45, 18);
	printf("5. 종 료  하 기 \n");
}

int main()
{
	system("title 프로젝트4조 벽트리스!");
	pntcolor();
	while (1)
	{
		int n;
		printface();
		gotoxy(42, 20);
		printf("※ 원하는 번호를 입력하시오: ");
		scanf("%d", &n);

		if (n == 5)
			break;
		switch (n)
		{
		case 1:
			singleplay();	//혼자하기//
			break;
		case 2:
			multplay();//같이하기//
			break;
		case 3:
			showrank(); //순위보기//
			break;
		case 4:
			backgroundmusic();//배경음악//
			break;
		}
		Sleep(700);
		system("cls");
	}
}