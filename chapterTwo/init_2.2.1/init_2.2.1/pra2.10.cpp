#include <string>
#include <iostream>
using namespace std;
std::string global_str;
int global_int;
int main() {
	int local_int;
	std::string local_str;
	//cout << local_int << endl;
	cout << local_str << endl;
	cout << global_int << endl;
	cout << global_str << endl;
	return 0;
}

/*
global_str和global int在所有函数体之外，故global_str初始值为"\0"，global_int初始值为0
local_str和local_int在函数体内部，不被初始化，变量值为定义
*/