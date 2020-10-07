#pragma once
#include"StatusOfTheDay.h"
#include"including.h"
#include"jottings.h"
using namespace std;

class Database
{
public:

	Database();

	int len;
	vector<StatusOfTheDay> everyday;

	void SaveToFile(string file_name , bool jottings);

	void init_readFile(string file_name , bool jottings);

	int jo_len;
	vector<jottings> Jottings;
};

