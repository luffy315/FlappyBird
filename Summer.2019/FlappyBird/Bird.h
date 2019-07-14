#pragma once
class Bird
{
private:
	int x;
	int y;
public:
	Bird();
	~Bird();
	void DrawBird();
	void HideBird();
	void Fly();
	void Down();
	bool CheckAlive();
};

