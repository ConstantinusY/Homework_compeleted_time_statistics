#include"func.h"
#include"Database.h"
#include<iomanip>
#include<algorithm>

using namespace std;

float max__(vector<float> target) {
	sort(target.begin(), target.end());
	return target.back();
}
float min__(vector<float> target) {
	sort(target.begin(), target.end());
	return target.front();
}

int find_current_element(vector<float>& input,float target) {
	int result = 0;
	
	while (true)
	{
		if (input[result] == target)
		{
			return result;
		}
		else {
			result += 1;
		}
	}
}

void check_time_report(Database& target_database, bool this_month)
{
	if (this_month)  {
		if (target_database.len < 30 )
		{
			cout << "�㻹û��¼����ʮ���ţ��鿴�ܱ���~" << endl;
			return check_time_report(target_database, false);
		}
		else
		{
			float total_time = 0;
			float average_time = 0;
			float min___time = 0;
			float max___time = 0;
			float finish_percent = 0;

			short print_time = 0;

			vector<float> used_time_list;
			for (int i = target_database.len - 30; i < target_database.len; i++)
			{
				target_database.everyday[i].show_status();

				total_time += target_database.everyday[i].used_time;
				print_time += 1;
				used_time_list.push_back(target_database.everyday[i].used_time);
			}

			average_time = total_time / print_time;
			min___time = min__(used_time_list);
			max___time = max__(used_time_list);
			finish_percent = total_time / 720 * 100;

			split_line(true);
			cout << "��ȥ" << print_time << "����Ч��¼�����ҵ������" << setiosflags(ios::fixed) << setprecision(3) << total_time << "Сʱ" << endl;
			cout << "ƽ��ÿ�������ҵ����" << setiosflags(ios::fixed) << setprecision(3) << average_time << "Сʱ" << endl;
			cout << "����֮�У���" << find_current_element(used_time_list, min___time) + 1 << "�컨��ʱ����̣�ֻ����" << setiosflags(ios::fixed) << setprecision(3) << min___time << "Сʱ" << endl;
			cout << "���ǣ���" << find_current_element(used_time_list, max___time) + 1 << "�컨��ʱ����࣬����" << setiosflags(ios::fixed) << setprecision(3) << max___time << "Сʱ" << endl;
			cout << "����Щ��ȫ����ʱ���У��㻨�� " << setiosflags(ios::fixed) << setprecision(3) << finish_percent << "% ��ʱ��д��ҵ���Ƿ��е㾪�ȣ�" << endl;
			split_line(false);
			cout << "��Ҳ�Ǹ��ӰѾ���ʿ��" << endl;

			system("pause");
		}
	}


	else if (!(this_month)) {

		float total_time = 0;
		float average_time = 0;
		float min___time = 0;
		float max___time = 0;
		float finish_percent = 0;

		short print_time = 0;

		vector<float> used_time_list;

		if (target_database.len < 7) {
			for (int i = 0; i < target_database.len; i++)
			{
				target_database.everyday[i].show_status();

				total_time += target_database.everyday[i].used_time;
				print_time += 1;
				used_time_list.push_back(target_database.everyday[i].used_time);
			}
		}
		else {
			for (int i = target_database.len - 7 ; i < target_database.len; i++)
			{
				target_database.everyday[i].show_status();

				total_time += target_database.everyday[i].used_time;
				print_time += 1;
				used_time_list.push_back(target_database.everyday[i].used_time);
			}
		}

		average_time = total_time / print_time;
		min___time = min__(used_time_list);
		max___time = max__(used_time_list);
		finish_percent = total_time / 168 * 100;

		split_line(true);
		cout << "��ȥ7����Ч��¼�����ҵ������"<<setiosflags(ios::fixed) << setprecision(3)<<total_time<<"Сʱ" << endl;
		cout << "ƽ��ÿ�������ҵ����" << setiosflags(ios::fixed) << setprecision(3)<<average_time<<"Сʱ" << endl;
		cout << "����֮�У���" << find_current_element(used_time_list, min___time) + 1 << "�컨��ʱ����̣�ֻ����" << setiosflags(ios::fixed) << setprecision(3) << min___time << "Сʱ" << endl;
		cout << "���ǣ���" << find_current_element(used_time_list, max___time) + 1 << "�컨��ʱ����࣬����" << setiosflags(ios::fixed) << setprecision(3) << max___time << "Сʱ" << endl;
		cout << "����Щ��ȫ����ʱ���У��㻨�� " << setiosflags(ios::fixed) << setprecision(3) << finish_percent << "% ��ʱ��д��ҵ���Ƿ��е㾪�ȣ�" << endl;
		split_line(false);
		cout << "��Ҳ�Ǹ��ӰѾ���ʿ��" << endl;
		
		system("pause");
	}
}