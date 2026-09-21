#include <sort.hpp>

int main() {
	int n;
	std::cin >> n;
	int* a = new int[n];
	for (int i{};i < n;std::cin >> a[i++]);
	bsort<int>(a,n);
	print<int>(a,n);

}