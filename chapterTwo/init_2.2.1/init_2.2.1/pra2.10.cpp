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
global_str��global int�����к�����֮�⣬��global_str��ʼֵΪ"\0"��global_int��ʼֵΪ0
local_str��local_int�ں������ڲ���������ʼ��������ֵΪ����
*/