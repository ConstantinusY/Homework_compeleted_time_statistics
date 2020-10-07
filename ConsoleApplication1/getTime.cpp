#define _CRT_SECURE_NO_WARNINGS
#include"including.h"
#include "func.h"
using namespace std;

string GetTime() {
	time_t t = time(NULL);
	char ch[64] = { 0 };
	strftime(ch, sizeof(ch) - 1, "%Y-%m-%d %H:%M:%S", localtime(&t));     //年-月-日 时-分-秒
	return ch;

}