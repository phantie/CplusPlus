#include<iostream>
#include<windows.h>
#include <conio.h>
using namespace std;
void main()
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
	Rectangle(hdc,140, 87, 215, 155);
	HPEN p3 = CreatePen(PS_SOLID, 3, RGB(253, 222, 204));
	SelectObject(hdc, p3);
	Rectangle(hdc, 140, 87, 215, 155);

	HBRUSH b4 = CreateSolidBrush(RGB(0,0,0));
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


	HBRUSH b6= CreateSolidBrush(RGB(0, 0, 0));
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
	Rectangle(hdc, 215, 165, 266, 190);
	HPEN p15 = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
	SelectObject(hdc, p15);
	Rectangle(hdc, 215, 165, 216, 190);



	_getch();
}