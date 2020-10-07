#include <iostream>

using namespace std;

int main() {
	constexpr size_t sz = 5;
	int arr[sz] = { 1, 2, 3, 4, 5 };
	int arr2[sz] = { 1, 2, 4, 3, 5 };
	for (int* ip = begin(arr); ip != end(arr); ++ip)
		*ip = 0;
}