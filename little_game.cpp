#include <iostream> 
#include <conio.h> 
#include <Windows.h> 
using namespace std;
void main()
{
	int width = 50, height = 30;
	system("mode con cols=51 lines=33");
	int xPos = width / 2, yPos = height / 2;
	int dx = -1, dy = -1;
	int sleep_time = 30;
	char symbol = 2;
	COORD start = { 0, 0 };
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci = { sizeof(cci), false };
	SetConsoleCursorInfo(h, &cci);
	bool flag = true;
	int ydesk = 25, xdesk = 30;
	do
	{
		for (int y = 0; y < height; y++)
		{
			for (int x = 0; x < width; x++)
			{
				char s;
				if (x == 0 && y == 0)
					s = 218;
				else if (x == 0 && y == height - 1)
					s = 192;
				else if (y == 0 && x == width - 1)
					s = 191;
				else if (y == height - 1 && x == width - 1)
					s = 217;
				else if (y == 0 || y == height - 1)
					s = 196;
				else if (x == 0 || x == width - 1)
					s = 179;
				else if (x == xPos&&y == yPos)
					s = symbol;
				else if (y == ydesk && x >= xdesk && x <= xdesk + 5)
					s = 219;
				else s = ' ';
				putchar(s);
			}
			cout << endl;
		}
		Sleep(sleep_time);
		if (_kbhit())
		{
			int k = _getch();
			if (k == 0 || k == 224)
				k = _getch();
			switch (k)
			{
			case 75:
				if (xdesk>1)
					xdesk--;
				break;
			case 77:
				if (xdesk<width - 7)
					xdesk++;
				break;
			case 27:
				flag = false;
				break;
			}
		}
		xPos += dx;
		yPos += dy;
		if (xPos == 1)
		{
			dx = -dx;
		}
		else if (yPos == 1)
		{
			dy = -dy;
		}
		else if (xPos == width - 2)
		{
			dx = -dx;
			xPos += dx;
			yPos += dy;
		}
		else if (yPos == ydesk - 1 && xPos <= xdesk + 5 && xPos >= xdesk)
		{
			dy = -dy;
		}
		else if (yPos == height - 1)
		{
			cout << "GAME OVER.GAME OVER.GAME OVER";
			Sleep(1000);
			flag = false;
		}
		SetConsoleCursorPosition(h, start);
	} while (flag);
	system("cls");
	cout << "Program is DONE.\n";
}