#include"Sales_item.h"
#include<iostream>
using namespace std;
int main() {
	Sales_item item;
	Sales_item curItem;
	if (cin >> curItem)
	{
		int cnt = 1;
		while (cin >> item)
		{
			if (curItem.isbn() == item.isbn())
			{
				cnt += 1;
			}
			else
			{
				std::cout << curItem.isbn() << " has " << cnt << " records." << std::endl;
				curItem = item;
				cnt = 1;
			}
		}
		std::cout << curItem.isbn() << " has " << cnt << " records." << std::endl;
	}
	else {
		cerr << "error!" << endl;
	}
	return 0;

}
