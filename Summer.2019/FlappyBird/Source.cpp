#include <Windows.h>
#include <conio.h>
#include <time.h>
#include "Header.h"
#include "Wall.h"

char mv = '-';
Bird fb;
Wall wall[10];
bool alive = 1;
void GoToXY(int x, int y)
{
	static HANDLE h = NULL;
	if (!h)
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);
}

void ResetData()
{
	srand(time(NULL));
}

void SubThread()
{
	while (1)
	{
		if (alive)
		{
			if (mv == ' ')
				fb.Fly();
			else
				fb.Down();
			mv = '-';
			fb.CheckAlive();

			Sleep(100);
		}
	}
}

void FixConsoleWindow() {
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

void DrawConsoleGame()
{
	for (int i = 0; i < 120; i++)
	{
		cout << "#";
	}
	GoToXY(0, 29);
	for (int i = 0; i < 120; i++)
	{
		cout << "#";
	}
}