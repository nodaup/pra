#include <string>
using namespace std;


using ArrT = string[10];
ArrT &func1(ArrT &arr);//使用类型别名

auto func2(ArrT &arr)->string(&)[10]; //使用尾置返回类型


string arrS[10];
decltype(arrS) &func3(ArrT &arr);//使用decltype关键字