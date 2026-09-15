#include "sort.hpp"
template <class T>
void print(T* a, int n) {
	for (int i{};i < n;std::cout << a[i++]);
}
template <class T>
void bsort(T* a, int n) {
	for (int i = 0;i < n;i++)
		for (int j = i + 1;j < n;j++)
			if (a[i] > a[j]) std::swap(a[i], a[j]);
}