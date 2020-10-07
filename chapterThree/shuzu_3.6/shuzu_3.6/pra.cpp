//3.43-3.42
#include <iostream>
using namespace std;
int main()
{
	//类型别名
	using int_array = int[3][3];
	using i = int;

	int_array arr = { 1,2,3,4,5,6,7,8,9 };

	cout << "version 1" << endl;
	//version 1
	for (i(&row)[3] : arr) {
		for (i col : row) {
			cout << col << ",";
		}
		cout << endl;
	}

	cout << "version 2" << endl;

	//version2
	for (i row = 0; row < 3; row++) {
		for (i col = 0; col < 3; col++) {
			cout << arr[row][col] << ",";
		}
		cout << endl;
	}

	cout << "version 3" << endl;
	//version3
	for (i(*row)[3] = arr; row != end(arr); row++) {
		//ERROR!
		//for (int(*col)[3] = row; col != end(row);col++) {
		//SUCCESS!
		for (i* col = *row; col != end(*row); *col++) {
			cout << *col << ",";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
//3.45
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };

	cout << "version 1" << endl;
	//version 1
	for (auto& row : arr) {
		for (auto col : row) {
			cout << col << ",";
		}
		cout << endl;
	}

	cout << "version 2" << endl;
	//version2
	for (auto row = 0; row < 3; row++) {
		for (auto col = 0; col < 3; col++) {
			cout << arr[row][col] << ",";
		}
		cout << endl;
	}

	cout << "version 3" << endl;
	//version3
	for (auto (*row)[3] = arr; row != end(arr); row++) {
		for (auto col = *row; col != end(*row); *col++) {
			cout << *col << ",";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}