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
		system("title ��¼��ҵ���ʱ��");
		record_homework_compelete_time(*database);
		break;
	case 1:
		system("title �鿴���ߴ���Ч��¼����");
		check_time_report(*database,false);
		break;
	case 2:
		system("title �鿴����ʮ����Ч��¼����");
		check_time_report(*database, true);
		break;
	case 3:
		system("title �༭�������ʱ��");
		edit_used_time(*database);
		break;
	case 4:
		system("title ��¼��Ϣ");
		write_some_shit_down(*database);
		break;
	case 5:
		system("title �鿴���������Ϣ");
		check_five_random_jottings(*database);
		break;
	case 6:
		system("title ���ȫ����Ϣ");
		clear_all_jottings(*database);
		break;
	case 7:
		system("title �鿴ʹ��ָ��");
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
	


