#include <iostream>
#include "Bird.h"
#include "Wall.h"

using namespace std;

extern bool alive;
extern char mv ;
extern Bird fb;
extern Wall wall[10];

void GoToXY(int x, int y);
void SubThread();
void FixConsoleWindow();
void DrawConsoleGame();