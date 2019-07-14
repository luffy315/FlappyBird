#include "Wall.h"
#include "Header.h"
#include <time.h>
#include <stdlib.h>


Wall::Wall()
{
	tdx = 119;
	tdy = 10;
}
Wall::Wall(const Wall &w)
{
	tdx = w.tdx + 5;
}

Wall::~Wall()
{
}

void Wall::CreateWall()
{
	tdy = 5 + rand() % 11;
}
void Wall::DrawWall()
{
	for (int i = 0; i < 5; i++)
	{
		GoToXY(tdx - i, tdy);
		cout << "-";
	}
}
void Wall::HideWall()
{
	for (int i = 0; i < 5; i++)
	{
		GoToXY(tdx - i, tdy);
		cout << " ";
	}
}
void Wall::MoveWall()
{
	if (tdx == 0) CreateWall();
	else
	{
		HideWall();
		tdx--;
		DrawWall();
	}
}
