#pragma once

#include "Robot.h"
#include "Interface_video_adapter.h"
#include "Keyboard_checker.h"
#include <iostream>
#include <fstream>


using namespace std;

class Robot_interface{
private:
	Robot* myRobot;
	Robot_RAM* myRAM;
	Interface_video_adapter* myVideo;
	vector<string> algorithm;
	void display_field();// Считываем с RobotRam координаты нащего поля, а затем отображаем их, вместе с логом.
	void event_processing_cycle(char choose); // Цикл обработки событий. Здесь мы ожидаем команды от пользователя или выполняем ранне заготовленные команды.
public:
	Robot_interface();  // Конструктор интерфейса
	void launch_programm(); //Запуск программы.Запуск цикла обработки событий 
	~Robot_interface(); // Деструктор интерфейса

};

