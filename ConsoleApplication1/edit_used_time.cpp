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
	cout <<  "��������Ҫ�޸ĵ�����" << endl;
	string target_date;
	cin >> target_date;
	int temp_p = find_current_element(TDB.everyday, target_date);
	if (temp_p > TDB.len or temp_p < 0)
	{
		cout << "��������" << endl;
		goto IF_INPUT_FALSE;
	}
	StatusOfTheDay Target = TDB.everyday[temp_p];
	
	cout << "���ҵ��ϵۣ���Ҫ�޸�ʲô��\n  0 -- ����  \n  1 -- ��ʼʱ��  \n  2 -- ��ʱ  " << endl;
	short choice;
	cin >> choice;

	split_line(true);

	switch (choice)
	{
	case 0:
	{
		cout << "ԭ���ڣ�" << Target.date << "\n��Ҫ�޸�Ϊ�����밴ԭ��ʽ���룩" << endl;
		string temp;
		cin >> temp;
		Target.date = temp;
		break;
	}
	case 1:
	{
		cout << "ԭ��ʼʱ�䣺" << Target.start_time << "\n��Ҫ�޸�Ϊ�����밴ԭ��ʽ���룩" << endl;
		string temp;
		cin >> temp;
		Target.start_time = temp;
		break;
	}	
	case 2:
	{
		cout << "ԭ��ʱ��" << Target.used_time << "\n��Ҫ�޸�Ϊ�����밴ԭ��ʽ���룩" << endl;
		float temp;
		cin >> temp;
		Target.used_time = temp;
		break;
	}
	default:
		cout << "��������" << endl;
		break;
	}
	TDB.everyday[temp_p] = Target;

	split_line(true);

	TDB.SaveToFile("database.txt",false);

	split_line(false);

	system("pause");
}