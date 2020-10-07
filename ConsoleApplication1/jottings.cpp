#include "jottings.h"
using namespace std;

jottings::jottings() {
	date = "";
	data = "";
}

ostream& operator<<(ostream& cout, jottings target) {
	cout << target.date << "||||||" << target.data;
	return cout;
}

void jottings::showJotting(short mode)  {
	string temp;
	if (size(date) >= size(data)) {
		temp.assign(size(date) + 1, '-');
	}
	else
	{
		temp.assign(size(data) + 1, '-');
	}
	switch (mode)
	{
	case 0:
	{
		cout << "☀" << temp << "☀" << endl;
		cout << "┇ " << date << endl;
		cout << "┇ " << data << endl;
		cout << "☀" << temp << "☀" << endl;
		break;
	}
	case 1:
	{
		cout << "☆" << temp << "☆" << endl;
		cout << "┇ " << date << endl;
		cout << "┇ " << data << endl;
		cout << "☆" << temp << "☆" << endl;
		break;
	}
	case 2:
	{
		cout << "☾" << temp << "☽" << endl;
		cout << "┇ " << date  << endl;
		cout << "┇ " << data << endl;
		cout << "☾" << temp << "☽" << endl;
		break;
	}
	}
}