#include"func.h"
using namespace std;

void check_five_random_jottings(Database& TDB)
{
	if (TDB.jo_len < 5) {
		for (short i = 0; i < TDB.jo_len; i++)
		{
			TDB.Jottings[random(TDB.jo_len)].showJotting(random(2));
		}
	}
	else
	{
		for (short i = 0; i < 5; i++)
		{
			TDB.Jottings[random(TDB.jo_len)].showJotting(random(2));
		}
	}

	system("pause");
}
