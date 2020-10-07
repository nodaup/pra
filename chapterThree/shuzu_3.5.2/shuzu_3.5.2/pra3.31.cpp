int main() {
	const size_t sz = 10;
	int ia[sz], ib[sz];
	for (size_t i = 0; i < sz; ++i)
		ia[i] = i;
	for (size_t i = 0; i < sz; ++i)
		ib[i] = ia[i];
}