#include <iostream>
using namespace std;
int main() {
	int val1, val2;
	while (cin >> val1 >> val2) {
		char answer;
		try {
			if (val2 == 0) 
				throw std::runtime_error("被除数不能为0");
			else
				cout << val1 / val2 << endl;
		}
		catch (exception e) {
			cout << "error!是否要重新开始?y or n" << endl;
			cin >> answer;
			if (answer == 'n')
				break;
		}
	}
	
}