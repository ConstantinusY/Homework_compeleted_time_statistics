#include"Database.h"
#include"func.h"
using namespace std;

int find_current_element(vector<StatusOfTheDay>& input, string target) {
	int result = 0;

	while (true)
	{
		if (result >= size(input)) {
			return -1;
		}
		if (input[result].date == target)
		{
			return result;
		}
		else {
			result += 1;
		}
	}
}

void edit_used_time(Database& TDB) {  // TDB:target database
	IF_INPUT_FALSE:
	cout <<  "请输入您要修改的日期" << endl;
	string target_date;
	cin >> target_date;
	int temp_p = find_current_element(TDB.everyday, target_date);
	if (temp_p > TDB.len or temp_p < 0)
	{
		cout << "输入有误！" << endl;
		goto IF_INPUT_FALSE;
	}
	StatusOfTheDay Target = TDB.everyday[temp_p];
	
	cout << "噢我的上帝，你要修改什么？\n  0 -- 日期  \n  1 -- 开始时间  \n  2 -- 用时  " << endl;
	short choice;
	cin >> choice;

	split_line(true);

	switch (choice)
	{
	case 0:
	{
		cout << "原日期：" << Target.date << "\n您要修改为？（请按原格式输入）" << endl;
		string temp;
		cin >> temp;
		Target.date = temp;
		break;
	}
	case 1:
	{
		cout << "原开始时间：" << Target.start_time << "\n您要修改为？（请按原格式输入）" << endl;
		string temp;
		cin >> temp;
		Target.start_time = temp;
		break;
	}	
	case 2:
	{
		cout << "原用时：" << Target.used_time << "\n您要修改为？（请按原格式输入）" << endl;
		float temp;
		cin >> temp;
		Target.used_time = temp;
		break;
	}
	default:
		cout << "输入有误！" << endl;
		break;
	}
	TDB.everyday[temp_p] = Target;

	split_line(true);

	TDB.SaveToFile("database.txt",false);

	split_line(false);

	system("pause");
}