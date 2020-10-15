#include <initializer_list>
#include <iostream>
#include <vector>
using namespace std;

int sum(initializer_list<int> num)
{
	 decltype(num.size()) num_sum = 0;
	 for (const auto &elem : num)
		 num_sum += elem;
	 return num_sum;
}

void print(vector<int> vec, int size) {
	
	if (size <= 0)
		return;
	else {
		cout << vec[size - 1];
		return print(vec, size - 1);
	}
}

 int main()
{
	 int num1;
	 initializer_list<int> num{ 2,3,4 };
	 int n_sum = sum(num);
	 cout << n_sum << endl;
	 
	 vector<int> vec = { 1,2,3 };
	 print(vec, 3); 
}