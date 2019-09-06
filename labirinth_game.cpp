#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>
using namespace std;
enum LAND {
	BLANK = ' ',
	WALL = 177,
	LAVA = 176,
	WATER = 178,
	SAND = 219,
	KEY = 12,
	DOOR = 186,
	P = 37,
	MDOOR = 179,
	TRAVA = 5,
	CORAL = 205,
	THREE = 204,
	START = 16,
	END = 17
};

enum LAND_COLOR {
	BLANKc,
	WALLc = 14,
	LAVAc = 12,
	WATERc = 9,
	SANDc = 14,
	KEYc = 14,
	DOORc = 7,
	PORTc = 0,
	MDOORc = 14,
	TRAVAc = 10,
	CORALc = 15,
	THREEc = 0,
	STARTc = 10,
	ENDc = 10
};

void elvis()
{

	system("color FC");

	HDC hdc = GetDC(GetConsoleWindow());


	HBRUSH b1 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b1);
	Rectangle(hdc, 120, 40, 170, 60);
	HPEN p1 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p1);
	Rectangle(hdc, 120, 40, 170, 60);

	HBRUSH b2 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b2);
	Rectangle(hdc, 120, 55, 225, 85);
	HPEN p2 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p2);
	Rectangle(hdc, 120, 55, 225, 85);

	HBRUSH b3 = CreateSolidBrush(RGB(253, 222, 204));
	SelectObject(hdc, b3);
	Rectangle(hdc, 140, 87, 215, 155);
	HPEN p3 = CreatePen(PS_SOLID, 3, RGB(253, 222, 204));
	SelectObject(hdc, p3);
	Rectangle(hdc, 140, 87, 215, 155);

	HBRUSH b4 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b4);
	Rectangle(hdc, 120, 100, 175, 95);
	HPEN p4 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p4);
	Rectangle(hdc, 120, 100, 175, 95);

	HBRUSH b5 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b5);
	Rectangle(hdc, 120, 100, 139, 111);
	HPEN p5 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p5);
	Rectangle(hdc, 120, 100, 139, 111);


	HBRUSH b6 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b6);
	Rectangle(hdc, 150, 100, 175, 111);
	HPEN p6 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p6);
	Rectangle(hdc, 150, 100, 175, 111);

	HBRUSH b7 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b7);
	Rectangle(hdc, 185, 86, 192, 130);
	HPEN p7 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p7);
	Rectangle(hdc, 185, 86, 192, 130);

	HBRUSH b8 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b8);
	Rectangle(hdc, 204, 86, 225, 111);
	HPEN p8 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p8);
	Rectangle(hdc, 204, 86, 225, 111);

	HBRUSH b9 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b9);
	Rectangle(hdc, 193, 86, 225, 95);
	HPEN p9 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p9);
	Rectangle(hdc, 193, 86, 225, 95);

	HBRUSH b10 = CreateSolidBrush(RGB(253, 222, 204));
	SelectObject(hdc, b10);
	Rectangle(hdc, 170, 155, 215, 170);
	HPEN p10 = CreatePen(PS_SOLID, 3, RGB(253, 222, 204));
	SelectObject(hdc, p10);
	Rectangle(hdc, 170, 155, 215, 170);

	HBRUSH b11 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b11);
	Rectangle(hdc, 217, 130, 225, 170);
	HPEN p11 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p11);
	Rectangle(hdc, 217, 130, 225, 170);

	HBRUSH b12 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b12);
	Rectangle(hdc, 226, 140, 234, 170);
	HPEN p12 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p12);
	Rectangle(hdc, 226, 140, 234, 170);

	HBRUSH b13 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b13);
	Rectangle(hdc, 150, 157, 169, 170);
	HPEN p13 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p13);
	Rectangle(hdc, 150, 157, 169, 170);

	HBRUSH b14 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b14);
	Rectangle(hdc, 120, 165, 169, 190);
	HPEN p14 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p14);
	Rectangle(hdc, 120, 165, 169, 190);

	HBRUSH b15 = CreateSolidBrush(RGB(0, 0, 0));
	SelectObject(hdc, b15);
	Rectangle(hdc, 217, 165, 266, 190);
	HPEN p15 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p15);
	Rectangle(hdc, 217, 165, 266, 190);


}

void start_screen()
{
	HANDLE j = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci = { sizeof(cci),false };
	SetConsoleCursorInfo(j, &cci);
	int x = 0, y = 4;
	char s = 0;
	COORD c = { 10, 2 };
	SetConsoleCursorPosition(j, c);
	cout << "LOADING...";

	SetConsoleTextAttribute(j, 20);
	while (x < 50)
	{
		c.X = x, c.Y = y;
		SetConsoleCursorPosition(j, c);
		cout << s;
		c.Y++;
		SetConsoleCursorPosition(j, c);
		cout << s;
		c.Y++;
		SetConsoleCursorPosition(j, c);
		cout << s;
		x++;
		Sleep(30);
	}


	SetConsoleTextAttribute(j, 13);
	c.X = 10, c.Y = 2;
	SetConsoleCursorPosition(j, c);

	cout << "LOADING DONE\n" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << " Press any key...";
	_getch();
	system("cls");
};



int labirint[30][50] = {
	{ WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL },
	{ START, BLANK, WALL, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, TRAVA, THREE, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL },
	{ WALL, BLANK, WALL, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, TRAVA, LAVA, TRAVA, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL,WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WATER, WATER, WATER, WATER, BLANK, WALL, WALL, BLANK, WATER, WATER,WATER, WATER,WATER, WATER, BLANK, WALL },
	{ WALL, P, WALL, WALL, BLANK, WALL, KEY, BLANK, BLANK, BLANK, BLANK, BLANK, DOOR, BLANK, WALL, BLANK, LAVA, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK,WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, WALL, BLANK, WATER, WATER, WATER, WATER, BLANK,WATER, BLANK, WALL, },
	{ WALL, BLANK, WALL, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, TRAVA, LAVA, TRAVA, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, BLANK,DOOR, BLANK, BLANK, BLANK, BLANK, WATER, BLANK, BLANK, BLANK, WALL },
	{ WALL, P, WALL, WALL, BLANK, BLANK,BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, LAVA, BLANK, WALL, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, BLANK,WATER, BLANK, WATER, BLANK, WALL, },
	{ WALL, BLANK, WALL, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, TRAVA, LAVA, TRAVA, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, LAVA, BLANK, WALL, BLANK, WALL, BLANK, BLANK, WALL, BLANK, KEY, WALL, BLANK, WATER, WATER, WATER, BLANK, WALL }, //7
	{ WALL, P, WALL, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WATER, BLANK, WALL, BLANK, WALL, WALL, BLANK, WALL, BLANK, WALL, WALL, BLANK, BLANK, WATER, WATER, BLANK, WALL },
	{ WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, LAVA, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WATER, BLANK, WALL },
	{ WALL, WALL, WALL, BLANK, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WATER, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, BLANK, BLANK, WALL },
	{ WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, LAVA, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, BLANK, BLANK, BLANK, BLANK, WALL, WALL, WALL, BLANK, WALL },
	{ WALL, BLANK, WATER, WATER, BLANK, WALL, BLANK, WALL, BLANK, TRAVA, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, BLANK, WALL, WALL, BLANK, BLANK, BLANK, WALL, WALL, WALL },
	{ WALL, BLANK, WATER, WATER, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, BLANK, WALL, BLANK, BLANK, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, WALL, WALL, BLANK, WALL, WALL, BLANK, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, WALL, WALL, BLANK, BLANK, BLANK, WALL },
	{ WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL,BLANK, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, BLANK, BLANK, WALL, WALL, WALL, BLANK, WALL },//13
	{ WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, BLANK, WALL, BLANK, BLANK, BLANK, WALL, WALL, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, BLANK, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, BLANK, WALL, WALL, BLANK, BLANK, BLANK, WALL, BLANK, WALL },
	{ WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL },
	{ WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL,TRAVA, WALL, LAVA, WALL,SAND, WALL, BLANK, WALL, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL },
	{ WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, WALL, KEY, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, BLANK, WALL, BLANK, WALL, BLANK, DOOR, BLANK, BLANK, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL }, // 17
	{ WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, WATER, WATER, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL },
	{ WALL, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK,WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, WALL, WALL, BLANK, WALL },
	{ WALL, BLANK, LAVA, LAVA, BLANK, WALL, BLANK, WALL, WATER, WATER, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, TRAVA, WALL, TRAVA, WALL, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, BLANK, BLANK, WALL },
	{ WALL, BLANK, LAVA, BLANK, BLANK, WALL, BLANK, WALL, WALL, WATER, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, MDOOR, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL },
	{ WALL, BLANK, LAVA, BLANK, BLANK, BLANK, BLANK, WALL, WATER, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, BLANK, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, WALL },
	{ WALL, BLANK, LAVA, BLANK, BLANK, LAVA, BLANK, WALL, WATER, WALL, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, WALL, WALL, WALL, BLANK, WALL },
	{ WALL, BLANK, LAVA, BLANK, BLANK, LAVA, BLANK, WALL, WATER, WATER, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, KEY, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, BLANK, BLANK, BLANK, WALL },
	{ WALL, BLANK, LAVA, LAVA, LAVA, LAVA, BLANK, WALL, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL },
	{ WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, WATER, WATER, WATER, WATER, BLANK, WATER, WATER, WATER, WATER, WALL, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, WALL, WALL, WALL, BLANK, WALL, WALL, WALL, BLANK, WALL },
	{ WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, DOOR, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, BLANK, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, BLANK, WALL, WALL, WALL, WALL, TRAVA, WALL, BLANK, BLANK, BLANK, WALL, WALL, WALL },
	{ WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, WALL, KEY, BLANK, WATER, WATER, WATER, WATER, BLANK, WATER, WATER, WATER, WATER, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, WALL, WALL, WALL, BLANK, BLANK, BLANK, END },
	{ WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL }
};

void game() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	system("mode con cols=51 lines=35");
	HANDLE j = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci = { sizeof(cci),false };
	SetConsoleCursorInfo(j, &cci);
	int x = 0, y = 4;
	char s = 0;
	COORD c = { 10, 2 };
	SetConsoleCursorPosition(j, c);
	cout << "LOADING...";

	SetConsoleTextAttribute(j, 20);
	while (x < 50)
	{
		c.X = x, c.Y = y;
		SetConsoleCursorPosition(j, c);
		cout << s;
		c.Y++;
		SetConsoleCursorPosition(j, c);
		cout << s;
		c.Y++;
		SetConsoleCursorPosition(j, c);
		cout << s;
		x++;
		Sleep(30);
	}


	SetConsoleTextAttribute(j, 13);
	c.X = 10, c.Y = 2;
	SetConsoleCursorPosition(j, c);

	cout << "LOADING DONE\n" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << " Press any key...";
	_getch();
	system("cls");


	for (int y = 0; y < 30; y++)
	{
		for (int x = 0; x < 50; x++)
		{
			LAND_COLOR l_c;
			switch (labirint[y][x])
			{
			case BLANK:
				l_c = BLANKc;
				break;
			case WALL:
				l_c = WALLc;
				break;
			case LAVA:
				l_c = LAVAc;
				break;
			case WATER:
				l_c = WATERc;
				break;
			case SAND:
				l_c = SANDc;
				break;
			case KEY:
				l_c = KEYc;
				break;
			case DOOR:
				l_c = DOORc;
				break;
			case P:
				l_c = PORTc;
				break;
			case MDOOR:
				l_c = MDOORc;
				break;
			case TRAVA:
				l_c = TRAVAc;
				break;
			case CORAL:
				l_c = CORALc;
				break;
			case THREE:
				l_c = THREEc;
				break;
			case START:
				l_c = STARTc;
				break;
			case END:
				l_c = ENDc;
				break;
			default:
				l_c = BLANKc;
				break;
			}
			SetConsoleTextAttribute(h, l_c);
			cout << (char)labirint[y][x];
		}
		cout << endl;
	}
	/*CONSOLE_CURSOR_INFO cci = { sizeof(cci), false };*///создаем объект, содержащий настройки дл€ хендла с указанием не отображать курсор
	SetConsoleCursorInfo(h, &cci);
	int life = 3, key_map = 5, key_hand = 0, air = 5, secret = 1;
	int sleep_time = 100;
	COORD pers = { 1, 1 };
	bool flag = true;
	char pers_face = 1;
	SetConsoleCursorPosition(h, { 0, 50 + 1 });
	SetConsoleTextAttribute(h, 12);
	cout << "Life = " << life << "   Keys x " << key_hand << "   Air = " << air << "   Secret x " << secret;
	SetConsoleCursorPosition(h, { 7, 30 });
	SetConsoleTextAttribute(h, 10);
	cout << life;

	do {
		SetConsoleTextAttribute(h, 7);
		SetConsoleCursorPosition(h, pers);
		putchar(pers_face);
		int k = _getch();
		if (k == 0 || k == 224)
			k = _getch();
		int dx = 0, dy = 0;
		switch (k)
		{
		case 'S':
		case 's':
		case 80://если была нажата клавиша вниз

			dy = 1;//то приращение по оси ординат будет положительным
			dx = 0;//по оси абсцисс приращение нулевое
			break;
		case 'W':
		case 'w':
		case 72://если вверх
			dy = -1;//аналогично согласно геометрической логике
			dx = 0;
			break;
		case 'A':
		case 'a':
		case 75://есди влево
			dy = 0;
			dx = -1;
			break;
		case 'D':
		case 'd':
		case 77://если вправо
			dy = 0;
			dx = 1;
			break;
		case 27://если была нажата клавиша ESC
			flag = false;//устанавливаем флажок на Ћќ∆№
						 //break пропускаем специально, чтоб сработал default
		default:
			dx = dy = 0;//если была нажата люба€ ина€ клавиша, то приращени€ равны нулю
		}
		int X = pers.X + dx, Y = pers.Y + dy;
		if (X == -1 || Y == -1 || X == 50 || Y == 30 || labirint[Y][X] == WALL || labirint[Y][X] == DOOR && key_hand == 0 || labirint[Y][X] == MDOOR && key_map > 0)
			continue;
		else
		{
			SetConsoleCursorPosition(h, pers);
			LAND_COLOR l_c;
			switch (labirint[pers.Y][pers.X])
			{
			case BLANK:
				l_c = BLANKc;
				break;
			case WALL:
				l_c = WALLc;
				break;
			case LAVA:
				l_c = LAVAc;
				break;
			case WATER:
				l_c = WATERc;
				break;
			case SAND:
				l_c = SANDc;
				break;
			case KEY:
				l_c = KEYc;
				break;
			case DOOR:
				l_c = DOORc;
				break;
			case P:
				l_c = PORTc;
				break;
			case MDOOR:
				l_c = MDOORc;
				break;
			case TRAVA:
				l_c = TRAVAc;
				break;
			case CORAL:
				l_c = CORALc;
				break;
			case START:
				l_c = STARTc;
				break;
			case END:
				l_c = ENDc;
				break;
			default:
				l_c = BLANKc;
				break;
			}
			SetConsoleTextAttribute(h, l_c);
			cout << (char)labirint[pers.Y][pers.X];
			pers.X += dx, pers.Y += dy;
		}


		int sleep_time = 2000;
		int a = 0;
		if (labirint[pers.Y][pers.X] == LAVA)
		{
			life--;
			SetConsoleCursorPosition(h, { 7, 30 });
			life == 1 ? SetConsoleTextAttribute(h, 12) : life == 2 ? SetConsoleTextAttribute(h, 2) : SetConsoleTextAttribute(h, 10);
			cout << life;
			if (life == 0)
			{
				flag = false;
				system("cls");
				SetConsoleCursorPosition(h, { 20, 15 });
				SetConsoleTextAttribute(h, 12);
				cout << "You LOSE!";
				SetConsoleCursorPosition(h, { 1, 30 });
				_getch;
			}
			else if (life < 10)
			{
				SetConsoleCursorPosition(h, { 8, 30 });
				SetConsoleTextAttribute(h, 0);
				cout << char(219);
			}


		}
		else if (labirint[pers.Y][pers.X] == TRAVA)
		{
			life++;
			SetConsoleCursorPosition(h, { 7, 30 });
			life == 1 ? SetConsoleTextAttribute(h, 12) : life == 2 ? SetConsoleTextAttribute(h, 2) : SetConsoleTextAttribute(h, 10);
			cout << life;
			labirint[pers.Y][pers.X] = BLANK;
		}
		else if (labirint[pers.Y][pers.X] == KEY)
		{
			key_hand++;
			key_map--;
			SetConsoleCursorPosition(h, { 18, 30 });
			key_hand > 0 ? SetConsoleTextAttribute(h, 14) : SetConsoleTextAttribute(h, 12);
			cout << key_hand;
			SetConsoleTextAttribute(h, 12);
			air = 5;
			SetConsoleCursorPosition(h, { 28, 30 });
			cout << air;
			labirint[pers.Y][pers.X] = BLANK;
		}
		else if (labirint[pers.Y][pers.X] == DOOR)
		{

			labirint[pers.Y][pers.X] = BLANK;
			key_hand--;
			SetConsoleCursorPosition(h, { 18, 30 });
			SetConsoleTextAttribute(h, 12);
			cout << key_hand;
		}
		else if (labirint[pers.Y][pers.X] == MDOOR)
		{

			labirint[pers.Y][pers.X] = BLANK;
			key_hand--;
			SetConsoleCursorPosition(h, { 18, 30 });
			SetConsoleTextAttribute(h, 12);
			cout << key_hand;
		}
		else if (labirint[pers.Y][pers.X] == P)
		{
			cout << (char)labirint[pers.Y][pers.X];
		}
		else if (labirint[pers.Y][pers.X] == THREE)
		{

			while (a < 4)
			{
				Sleep(sleep_time);
				a++;
				if (a == 1)
				{
					system("cls");
					SetConsoleCursorPosition(h, { 10 ,15 });
					SetConsoleTextAttribute(h, 12);
					cout << "Suda nekogda nikto ne hodit... ";
				}
				else if (a == 2)
				{
					system("cls");
					SetConsoleCursorPosition(h, { 21 ,15 });
					cout << "Ooo... ";
				}
				else if (a == 3)
				{
					system("cls");
					SetConsoleCursorPosition(h, { 20 ,15 });
					cout << "Chelovek... ";
				}
				else if (a == 4)
				{
					system("cls");
					SetConsoleCursorPosition(h, { 14 ,15 });
					cout << "Pozdravlau ti pobedil !! ";
					flag = false;
					SetConsoleCursorPosition(h, { 1, 30 });
					_getch;
				}

			}
		}

		else if (labirint[pers.Y][pers.X] == WATER)
		{

			air--;
			SetConsoleCursorPosition(h, { 28, 30 });
			air > 2 ? SetConsoleTextAttribute(h, 12) : SetConsoleTextAttribute(h, 13);
			cout << air;
			if (air == 0)
			{
				flag = false;
				system("cls");
				SetConsoleCursorPosition(h, { 20, 15 });
				SetConsoleTextAttribute(h, 12);
				cout << "You LOSE!";
				SetConsoleCursorPosition(h, { 1, 30 });
				_getch;
			}

		}
		else if (labirint[pers.Y][pers.X] == END)
		{

			system("cls");
			SetConsoleCursorPosition(h, { 15 ,15 });
			SetConsoleTextAttribute(h, 12);
			cout << "You WIN - You BEST ! ";


			while (a < 5)
			{
				Sleep(sleep_time);
				a++;
				if (a == 1)
				{
					system("cls");
					SetConsoleCursorPosition(h, { 15 ,15 });
					SetConsoleTextAttribute(h, 12);
					cout << "You WIN - You BEST ! ";
				}
				else if (a == 2)
				{
					system("cls");
					SetConsoleCursorPosition(h, { 20 ,15 });

					cout << "Ooohhhh... ";
				}
				else if (a == 3)
				{
					system("cls");
					SetConsoleCursorPosition(h, { 19 ,15 });

					cout << "... sorry ... ";
				}
				else if (a == 4)
				{
					system("cls");
					SetConsoleCursorPosition(h, { 20 ,15 });

					cout << "... NOT You ";

				}
				else if (a == 5)
				{
					system("cls");
					SetConsoleCursorPosition(h, { 15 ,17 });
					cout << " ELVIS THE BEST !";
					elvis();
				}
			}

			SetConsoleCursorPosition(h, { 3 , 30 });
			SetConsoleTextAttribute(h, 0);
			flag = false;
			_getch;




		}
		else if (labirint[pers.Y][pers.X] == SAND)
		{
			flag = false;
			system("cls");
			SetConsoleCursorPosition(h, { 18 ,16 });
			SetConsoleTextAttribute(h, 12);
			cout << " Next time?";
			SetConsoleCursorPosition(h, { 1 , 30 });
			_getch;
		}


		else
		{
			air = 5;
			SetConsoleCursorPosition(h, { 28, 30 });
			SetConsoleTextAttribute(h, 12);
			cout << air;
		}
		_getch;
	} while (flag);
};

enum class MENU { PLAY, EXIT, RULES };

MENU menu()
{
	int a;
	do
	{

		HANDLE z = GetStdHandle(STD_OUTPUT_HANDLE);
		/*CONSOLE_CURSOR_INFO cci = { sizeof(cci), false };
		SetConsoleCursorInfo(h, &cci);*/
		SetConsoleTextAttribute(z, 15);
		cout << "          Enter your choice:\n";
		cout << "          1 - Play game\n";
		cout << "          2 - Check rules\n";
		cout << "          3 - Exit.\n";
		cin >> a;

	} while ((a<1 || a>3) && (system("cls") || true));
	switch (a)
	{
	case 1:
		return MENU::PLAY;
	case 2:
		return MENU::RULES;
	case 3:
		return MENU::EXIT;
	}

}

void rules()
{
	cout << "                       RULES\n";
	cout << "Search keys - open doors. ^)))\n";
	cout << "Like lava more than sand.\n";
	cout << "No health? Be vegetarian - eat grass!\n";
	cout << "Like sea? We have puddle!\n";
	cout << "For the best explorers: SECRET on the map.\n";
	cout << "   \n";
	cout << "GL HF!\n";
	_getch();
	system("cls");
}

void main()
{
	system("mode con cols=51 lines=35");
	start_screen();
	bool flag = true;
	while (true)
	{
		MENU m = menu();
		system("cls");
		switch (m)
		{
		case MENU::PLAY:
			game();
			break;
		case MENU::EXIT:
			flag = false;
			exit(0);
			break;
		case MENU::RULES:
			rules();
			break;
		}
	}
	_getch;




}


//расширить лабиринт до размера 50х30 €чеек
//заполнить его интересными преп€тстви€ми, обозначить точки входы и выхоад