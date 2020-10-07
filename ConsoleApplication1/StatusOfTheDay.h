#pragma once

#include"including.h"
using namespace std;

class StatusOfTheDay {
public:
	string date;
	string start_time;
	float used_time;
	StatusOfTheDay(string date = "", string start_time = "", float used_time = 0);
	void show_status();
};

ostream& operator<<(ostream& cout, StatusOfTheDay target); // output: date start_time used_time