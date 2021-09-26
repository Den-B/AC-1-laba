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
	void display_field();// ��������� � RobotRam ���������� ������ ����, � ����� ���������� ��, ������ � �����.
	void event_processing_cycle(char choose); // ���� ��������� �������. ����� �� ������� ������� �� ������������ ��� ��������� ����� ������������� �������.
public:
	Robot_interface();  // ����������� ����������
	void launch_programm(); //������ ���������.������ ����� ��������� ������� 
	~Robot_interface(); // ���������� ����������

};

