#include <string>
using namespace std;


using ArrT = string[10];
ArrT &func1(ArrT &arr);//ʹ�����ͱ���

auto func2(ArrT &arr)->string(&)[10]; //ʹ��β�÷�������


string arrS[10];
decltype(arrS) &func3(ArrT &arr);//ʹ��decltype�ؼ���