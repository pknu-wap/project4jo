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
	printf("����");
}
void multplay()
{
	Sleep(100);
	system("cls");
	printf("q����");
}

void showrank()
{
	Sleep(100);
	system("cls");
	printf("������");
}

void backgroundmusic()
{
	Sleep(100);
	system("cls");
	printf("s��������");
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
		printf("�١ڡ١ڡ١� �� �� �� �� �١ڡ١ڡ١�");
		Sleep(50);
		system("cls");

	}
}
void printface()
{
	gotoxy(35, 5);
	printf("�١ڡ١ڡ١ڡ١� �� �� �� �� �١ڡ١ڡ١ڡ١�");
	gotoxy(45, 10);
	printf("1. �� �� �� �� \n");
	gotoxy(45, 12);
	printf("2. ȥ �� �� �� \n");
	gotoxy(45, 14);
	printf("3. �� �� �� �� \n");
	gotoxy(45, 16);
	printf("4. ȯ �� �� �� \n");
	gotoxy(45, 18);
	printf("5. �� ��  �� �� \n");
}

int main()
{
	system("title ������Ʈ4�� ��Ʈ����!");
	pntcolor();
	while (1)
	{
		int n;
		printface();
		gotoxy(42, 20);
		printf("�� ���ϴ� ��ȣ�� �Է��Ͻÿ�: ");
		scanf("%d", &n);

		if (n == 5)
			break;
		switch (n)
		{
		case 1:
			singleplay();	//ȥ���ϱ�//
			break;
		case 2:
			multplay();//�����ϱ�//
			break;
		case 3:
			showrank(); //��������//
			break;
		case 4:
			backgroundmusic();//�������//
			break;
		}
		Sleep(700);
		system("cls");
	}
}