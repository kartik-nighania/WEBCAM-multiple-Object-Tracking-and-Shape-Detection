#pragma once
#include <string>

using namespace std;
class shapes
{
public:
	shapes(void);
	~shapes(void);

	int getXpos();
	void setXpos(int x);

	int getYpos();
	void setYpos(int y);

private :
		int xPos, yPos;
		string type;
};


