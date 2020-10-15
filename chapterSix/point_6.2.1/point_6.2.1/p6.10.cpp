#include <iostream>
void change(int* p, int* s) {
	int term = *p;
	*p = *s;
	*s = term;
}


int main() {
	int *p,*s;
	int a = 0;
	int b = 1;
	p = &a;
	s = &b;
	change(p, s);
	std::cout << *p << *s;
}