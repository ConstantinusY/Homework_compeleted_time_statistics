#pragma once
#include"including.h"
#include"Database.h"
#include"StatusOfTheDay.h"
#include<time.h>
#include<windows.h>
#include<cstring>
using namespace std;

string GetTime();

void showMenu(const string& time);

void split_line(bool all_blank);

void record_homework_compelete_time(Database&target_database);

int find_current_element(vector<float>& input, float target);

int find_current_element(vector<StatusOfTheDay>& input, string target);

void check_time_report(Database& target_database, bool this_month);

void edit_used_time(Database& TDB);

void write_some_shit_down(Database& TDB);

vector<string> split_str(string target, string sign);

void check_five_random_jottings(Database& TDB);

void clear_all_jottings(Database& TDB);

void check_using_introduction();

void exit_system();
