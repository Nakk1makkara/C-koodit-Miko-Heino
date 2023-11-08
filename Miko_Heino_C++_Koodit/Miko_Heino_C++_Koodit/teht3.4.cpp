#include <iostream>

void tulostaArvot(const int* t, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << t[i] << " ";
	}
	std::cout << '\n';
}