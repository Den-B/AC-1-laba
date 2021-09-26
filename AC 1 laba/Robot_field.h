#pragma once
#include "Field_cell.h"
#include <iostream>
#include <vector>
#include <fstream>
#include "Field_cell.h"
#include "Robot_field.h"

using namespace std;

class Robot_field{
private:
	int buffer;
	Field_cell** cells;
	void write_field();
public:
	Robot_field();
	string check_cell(int X, int Y);
	string check_cell(Cell_coordinates* coordinates);
	Field_cell* cell(int X, int Y);
	Field_cell* cell(Cell_coordinates* coordinates);
	string next_cell_value(char current_direction, Cell_coordinates* cell_coordinates);
	Field_cell** Field();
	~Robot_field();
};