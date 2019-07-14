#include "Header.h"
#include "Bird.h"
#include <Windows.h>
#include <thread>
#include <conio.h>
int main()
{
	char temp;
	FixConsoleWindow();
	DrawConsoleGame();
	thread t1(SubThread);
	while (1)
	{
		temp = _getch();
		if (temp == ' ')
		{
			mv = temp;
		}
		else
			return 0;
	}
	system("pause");
}