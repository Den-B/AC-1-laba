#pragma once
#include "Cell_coordinates.h"
#include <string>

using namespace std;

class Field_cell {
private:
	Cell_coordinates cellCoordinates;
	string container_item = "default";
	int color = 752;
	char character = ' ';
public:
	void set_coordinates(int X, int Y);
	void set_coordinates(Cell_coordinates* new_coordinates);
	void set_color(int new_color);
	void set_character(int new_character);
	int get_color();
	char get_character();
	bool set_item(string new_item);
	string remove_item();
	string check_cell();

};