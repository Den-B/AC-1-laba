#pragma once

using namespace std;

class Cell_coordinates {
private:
	int x = 0;
	int y = 0;
public:
	void setCoordinates(int X, int Y);
	bool up();
	bool down();
	bool left();
	bool right();
	int get_x();
	int get_y();
};
