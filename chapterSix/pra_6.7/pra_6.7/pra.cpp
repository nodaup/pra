
#include <iostream>
#include<string>
#include<vector>
using namespace std;

int add(int a, int b)
{
	return a + b;
}
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }//声明定义函数

int main(int argc, char** argv)
{
	typedef int(*p)(int a, int b);	//声明函数指针，未初始化,p为指向函数的指针。使用typedef的声明语句定义的不再是变量而是类型别名
	//就是将变量转化为类型别名的一种方式，p原来是指向函数的指针变量，现在变成了指向函数的指针变量的类型别名
	vector<p> vec{ add, subtract, multiply, divide };//vector初始化的C++11新特性
	for (auto f : vec)
		cout << f(2, 2) << endl;
	return 0;
}