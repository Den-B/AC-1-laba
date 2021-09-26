#include "stdafx.h"
#include "Robot_interface.h"

void Robot_interface::display_field() { // ��������� � RobotRam ���������� ������ ����, � ����� ���������� ��, ������ � �����.
	myVideo->draw_field(myRAM);
}

void Robot_interface::event_processing_cycle(char choose) { // ���� ��������� �������. ����� �� ������� ������� �� ������������ ��� ��������� ����� ������������� �������.
	ifstream method_reader;
	string buffer;
	bool isEnd = false;
	switch (choose) {
	case '1':
		while (isEnd == false) {
			string result;
			display_field();
			cout << "������� ����� �������" << endl;
			cout << "1.RIGHT (������� ������ / D);" << endl;
			cout << "2.LEFT (������� ����� / A);" << endl;
			cout << "3.MOVE (������� ����� / W);" << endl;
			cout << "4.TAKE (ENTER)" << endl;
			cout << "5.PUT (DELETE)" << endl;
			result = Keyboard_checker::get_key_command();
			if (result != "END") {
				if (result != "ERROR") {
					myRobot->execute_command(result);
				}

			}
			else isEnd = true;
		}
		break;
	case '2':
		method_reader.open("methods.txt");
		while (method_reader) {
			method_reader >> buffer;
			algorithm.push_back(buffer);
		}
		method_reader.close();
		for (int i = 0; i < algorithm.size(); i++) {
			myRobot->execute_command(algorithm[i]);
			display_field();
			Sleep(200);
		}
		break;
	default:
		cout << "������.�� ������ ����� ���������� ���������." << endl;
	}
}


Robot_interface::Robot_interface() { // ����������� ����������
	myRobot = new Robot();
	myVideo = new Interface_video_adapter();
	myRAM = myRobot->get_access_to_RAM();
}

void Robot_interface::launch_programm() { //������ ���������.������ ����� ��������� ������� 
	char choose = '0';
	while (choose != '1' && choose != '2') {
		cout << "\t\t\t�������� ����� ������ ������." << endl << endl;
		cout << "1.������ ���������� �������." << endl;
		cout << "2.�������������� ����������." << endl;
		cin >> choose;
		system("cls");
	}
	event_processing_cycle(choose);
	cout << "���������� ������ ���������.";
}

Robot_interface::~Robot_interface() { // ���������� ����������
	delete myRobot;
	delete myVideo;
}