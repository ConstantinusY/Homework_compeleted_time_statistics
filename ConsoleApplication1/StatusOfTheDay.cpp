#include "StatusOfTheDay.h"
using namespace std;

StatusOfTheDay::StatusOfTheDay(string date, string start_time, float used_time) {
	this->date = date;
	this->start_time = start_time;
	this->used_time = used_time;
}

void StatusOfTheDay::show_status()
{
	cout << "     ---------------------     " << endl;
	cout << "     日期：" << date << "    " << endl;
	cout << "    开始时间：" << start_time << "   " << endl;
	cout << "     用时：" << used_time << " 小时    " << endl;
	cout << "     ---------------------     " << endl;
}

ostream& operator<<(ostream& cout, StatusOfTheDay target)
{
	cout << target.date << " " << target.start_time << " " << target.used_time;
	return cout;
}
