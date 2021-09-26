#include "stdafx.h"
#include <iostream>
#include "Robot_interface.h"

using namespace std;

int main(){
    setlocale(0, "Russian");
    Robot_interface robot_interface;
    robot_interface.launch_programm();
	system("pause");
    return 0;
}

