#include <string.h>
#include"Sales_data.h"
#include <iostream>
int main(){
	Sales_data data;
	cin >> data.bookName >> data.bookID >> data.price;
	cout << data.bookName << data.bookID << data.price << endl;
	return 0;
}