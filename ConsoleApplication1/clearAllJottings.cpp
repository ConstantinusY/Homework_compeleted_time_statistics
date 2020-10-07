#include"func.h"
using namespace std;
void clear_all_jottings(Database& TDB)
{
	for (int i = 0; i < TDB.jo_len; i++)
	{
		TDB.Jottings.pop_back();
	}
	TDB.jo_len = 0;

	TDB.SaveToFile("jottings.txt", true);

	cout << "³É¹¦Çå¿Õ£¡" << endl;
	system("pause");
}
