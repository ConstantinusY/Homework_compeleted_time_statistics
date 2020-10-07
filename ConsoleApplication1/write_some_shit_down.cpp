#include"jottings.h"
#include"func.h"
using namespace std;

void write_some_shit_down(Database& TDB) {
	jottings temp;
	
	temp.date = GetTime().substr(0, 16);

	string temp_data;
	cout << "噢，我的上帝\n今天写个啥？" << endl;
	string a;
	getline(cin, a);
	getline(cin, temp_data);

	temp.data = temp_data;

	TDB.Jottings.push_back(temp);

	TDB.jo_len += 1;

	TDB.SaveToFile("jottings.txt", true);

	split_line(false);

	system("pause");

}