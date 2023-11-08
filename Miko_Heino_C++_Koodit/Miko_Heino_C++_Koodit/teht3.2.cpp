#include <iostream>

void lueArvot(int* t, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "syötä kokonaisluku taulukkoon";
		std::cin >> t[i];
	}
}