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
			cout << "你还没记录够三十天呐，查看周报吧~" << endl;
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
			cout << "过去" << print_time << "天有效记录完成作业共花费" << setiosflags(ios::fixed) << setprecision(3) << total_time << "小时" << endl;
			cout << "平均每天完成作业花费" << setiosflags(ios::fixed) << setprecision(3) << average_time << "小时" << endl;
			cout << "在这之中，第" << find_current_element(used_time_list, min___time) + 1 << "天花费时间最短，只用了" << setiosflags(ios::fixed) << setprecision(3) << min___time << "小时" << endl;
			cout << "但是，第" << find_current_element(used_time_list, max___time) + 1 << "天花费时间最多，用了" << setiosflags(ios::fixed) << setprecision(3) << max___time << "小时" << endl;
			cout << "在这些天全部的时间中，你花了 " << setiosflags(ios::fixed) << setprecision(3) << finish_percent << "% 的时间写作业，是否有点惊讶？" << endl;
			split_line(false);
			cout << "我也是个加把劲骑士！" << endl;

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
		cout << "过去7天有效记录完成作业共花费"<<setiosflags(ios::fixed) << setprecision(3)<<total_time<<"小时" << endl;
		cout << "平均每天完成作业花费" << setiosflags(ios::fixed) << setprecision(3)<<average_time<<"小时" << endl;
		cout << "在这之中，第" << find_current_element(used_time_list, min___time) + 1 << "天花费时间最短，只用了" << setiosflags(ios::fixed) << setprecision(3) << min___time << "小时" << endl;
		cout << "但是，第" << find_current_element(used_time_list, max___time) + 1 << "天花费时间最多，用了" << setiosflags(ios::fixed) << setprecision(3) << max___time << "小时" << endl;
		cout << "在这些天全部的时间中，你花了 " << setiosflags(ios::fixed) << setprecision(3) << finish_percent << "% 的时间写作业，是否有点惊讶？" << endl;
		split_line(false);
		cout << "我也是个加把劲骑士！" << endl;
		
		system("pause");
	}
}