#include"func.h"
using namespace std;

void record_homework_compelete_time(Database& target_database)
{
	string start_time = "";
	float used_time = 0;
	
	cout << "你几点开始写的？\n（格式：小时：分钟am. / pm.，eg. 5：37pm.）\n空格会导致异常！" << endl;
	cin >> start_time;
	
	cout << "你花了多长时间？\n（请输入小时，保留三位小数。eg.1.337）" << endl;
	cin >> used_time;

	StatusOfTheDay result;
	result.date = GetTime().substr(0, 10);
	result.used_time = used_time;
	result.start_time = start_time;
	target_database.everyday.push_back(result);
	target_database.len = size(target_database.everyday);

	split_line(true);
	target_database.SaveToFile("database.txt",false);
	system("pause");
}