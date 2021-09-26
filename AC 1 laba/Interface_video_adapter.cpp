#include "stdafx.h"
#include "Interface_video_adapter.h"

Interface_video_adapter::Interface_video_adapter() {
	window_hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleCursorInfo(window_hwnd, &cursor_info);
	cursor_info.bVisible = false;
	SetConsoleCursorInfo(window_hwnd, &cursor_info);
}

void Interface_video_adapter::draw_field(Robot_RAM* current_RAM) {
	window_coord.X = 0;
	window_coord.Y = 0;
	SetConsoleCursorPosition(window_hwnd, window_coord);
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			if (current_RAM->coordinates()->get_x() == k && current_RAM->coordinates()->get_y() == i) {
				current_RAM->field()->cell(k, i)->set_character(current_RAM->direction()->current_direction());
			}
			SetConsoleTextAttribute(window_hwnd, current_RAM->field()->cell(k, i)->get_color());
			cout << current_RAM->field()->cell(k, i)->get_character();
			SetConsoleTextAttribute(window_hwnd, 7);
			current_RAM->field()->cell(k, i)->set_character(' ');
		}
		cout << endl;
	}
	cout << endl;
	cout << " оличество маркеров в хранилище робота: " << current_RAM->container()->count() << '.' << endl;
	cout << endl << endl;
}