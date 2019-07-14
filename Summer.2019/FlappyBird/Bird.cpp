#include "Bird.h"
#include "Wall.h"
#include "Header.h"


Bird::Bird()
{
	x = 5;
	y = 5;
}


Bird::~Bird()
{
}

void Bird::DrawBird()
{
	GoToXY(x, y);
	for (int i = 0; i <= 3; i++)
		cout << "_";
	GoToXY(x, y + 1);
	for (int i = 0; i <= 3; i++)
		cout << "0";
	cout << "\n";
}
void Bird::HideBird()
{
	GoToXY(x, y);
	for (int i = 0; i <= 3; i++)
		cout << " ";
	GoToXY(x, y + 1);
	for (int i = 0; i <= 3; i++)
		cout << " ";
}
void Bird::Fly()
{
	HideBird();
	y--;
	DrawBird();
}
void Bird::Down()
{
	HideBird();
	y++;
	DrawBird();
}

bool Bird::CheckAlive()
{
	if (x == 0 || x == 29) alive = 0;

}