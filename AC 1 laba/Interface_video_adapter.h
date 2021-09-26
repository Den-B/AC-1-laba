#pragma once
#include <Windows.h>
#include "Robot_RAM.h"
#include <iostream>

using namespace std;

class Interface_video_adapter{

private:
	COORD window_coord;
	HANDLE window_hwnd;
	CONSOLE_CURSOR_INFO cursor_info;
public:
	Interface_video_adapter();
	void draw_field(Robot_RAM* current_RAM);
};

