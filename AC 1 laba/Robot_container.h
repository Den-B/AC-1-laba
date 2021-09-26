#pragma once
#include <vector>
#include <string>

using namespace std;

class Robot_container{
private:
	vector<string>* robot_container;
	string buffer;
public:
	Robot_container();
	bool add_new_item(string new_item);
	string delete_last_item();
	void clear();
	int count();
	~Robot_container();
};

