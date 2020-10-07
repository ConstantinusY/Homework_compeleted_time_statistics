#include"func.h"
using namespace std;

void showMenu(const string& time)
{
	system("cls");

	cout << "╔-------------------------------╗" << endl;
	cout << "┇ 访问时间:" << time <<"  ┇"<< endl;
	cout << "┇ hey欢迎您！您一定写完作业了!  ┇" << endl;
	cout << "┇      选择您要进行的操作       ┇" << endl;
	cout << "┇ 0 --- 记录今日作业完成时间    ┇" << endl;
	cout << "┇ 1 --- 查看上七天作业完成统计  ┇" << endl;
	cout << "┇ 2 --- 查看三十天作业完成统计  ┇ " << endl;
	cout << "┇ 3 --- 修改作业完成时间        ┇" << endl;
	cout << "┇ 4 --- 记录信息                ┇ " << endl;
	cout << "┇ 5 --- 查看随机信息            ┇" << endl;
	cout << "┇ 6 --- 清空信息                ┇" << endl;
	cout << "┇ 7 --- 查看使用介绍            ┇" << endl;
	cout << "┇ 8 --- 退出系统                ┇" << endl;
	cout << "╚-------------------------------╝" << endl;
	split_line(false);

}