#pragma once
#include"including.h"
using namespace std;

class jottings
{
public:
	jottings();

	string date;
	string data;

	void showJotting(short mode);
};

ostream& operator<<(ostream& cout, jottings target);