#include"including.h"
#include"func.h"
#include"Database.h"
using namespace std;

int main() {
	system("title Program DESIGNED BY Constantinus_Y");
	srand((int)time(0));

	Database* database = new Database ;
	database->len = 0;
	database->init_readFile("database.txt",false);
	database->init_readFile("jottings.txt", true);
	
START:
	system("title Program DESIGNED BY Constantinus_Y");
	showMenu(GetTime());

	
	short choice = 0;
	cin >> choice;

	switch (choice)
	{
	case 0:
		system("title 记录作业完成时间");
		record_homework_compelete_time(*database);
		break;
	case 1:
		system("title 查看上七次有效记录报告");
		check_time_report(*database,false);
		break;
	case 2:
		system("title 查看上三十次有效记录报告");
		check_time_report(*database, true);
		break;
	case 3:
		system("title 编辑单日完成时间");
		edit_used_time(*database);
		break;
	case 4:
		system("title 记录信息");
		write_some_shit_down(*database);
		break;
	case 5:
		system("title 查看随机五条信息");
		check_five_random_jottings(*database);
		break;
	case 6:
		system("title 清空全部信息");
		clear_all_jottings(*database);
		break;
	case 7:
		system("title 查看使用指南");
		check_using_introduction();
		break;
	case 8:
		exit_system();
		break;
	default:
		exit_system();
		break;
	}
	goto START;
}
	


