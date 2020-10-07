#include"Database.h"
#include "func.h"
using namespace std;

vector<string> split_str(string target, string sign) {
	vector<string> result;
	
	int start_p = 0;
	while (start_p < size(target))
	{
		result.push_back((target.substr(start_p, target.find(sign))).erase(0,size(sign)));
		
		target.find(sign, start_p + 1) != -1 ? start_p = target.find(sign, start_p) : start_p = size(target);
	}

	return result;
}


void Database::SaveToFile(string file_name , bool jottings)
{
	if (!(jottings))
	{
		ofstream ofs;

		ofs.open(file_name, ios::out | ios::trunc);

		for (int i = 0; i < len; i++)
		{
			ofs << everyday[i] << endl;
		}

		ofs.close();

		cout << " 成功保存到文件！" << endl;
	}
	else
	{
		ofstream ofs;

		ofs.open(file_name, ios::out | ios::trunc);

		for (int i = 0; i < jo_len; i++)
		{
			ofs << Jottings[i] << endl;
		}

		ofs.close();

		cout << " 成功保存到文件！" << endl;
	}
}

void Database::init_readFile(string file_name , bool jottings)
{
	if (!(jottings))
	{
		ifstream ifs;

		ifs.open(file_name, ios::in);

		string date;
		string start_time;
		float used_time;

		while (ifs >> date && ifs >> start_time && ifs >> used_time)
		{
			StatusOfTheDay temp;
			temp.date = date;
			temp.start_time = start_time;
			temp.used_time = used_time;
			everyday.push_back(temp);
		}

		len = size(everyday);
	}
	else
	{
		ifstream ifs;

		ifs.open(file_name, ios::in);

		string a;

		while (getline(ifs,a))
		{
			class jottings temp;
			
			vector<string> b;
			b.push_back(a.substr(0, a.find("||||||")));
			b.push_back(a.substr(a.find("||||||")+6, size(a)- a.find("||||||")));
			temp.date = b[0];
			temp.data = b[1];

			Jottings.push_back(temp);
		}

		jo_len = size(Jottings);
	}
}

