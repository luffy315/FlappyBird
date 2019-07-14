#pragma once
class Wall
{
private:
	int tdy;
	int tdx;
public:
	Wall();
	Wall(const Wall &w);
	~Wall();
	void CreateWall();
	void DrawWall();
	void HideWall();
	void MoveWall();
};

