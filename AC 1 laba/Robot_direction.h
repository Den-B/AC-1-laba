#pragma once
#include <iostream>

using namespace std;

class Robot_direction{
private:
	char direction = 'v';
public:
	void set_direction(char new_direction);
	char right();
	char left();
	char current_direction();
};

