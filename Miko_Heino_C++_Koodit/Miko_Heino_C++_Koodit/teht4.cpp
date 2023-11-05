#include <iostream>

int summaaA(const int* a, const int* b) {
	return *a + *b;
}

int summaaB(const int& a, const int& b) {
	return a + b;
}

int main() {
	int luku1 = 5;
	int luku2 = 10;

	int tulosA = summaaA(&luku1, &luku2);
	std::cout << "Summa osoittimina: " << tulosA << '\n';

	int tulosB = summaaB(luku1, luku2);
	std::cout << " Summa referensseinä: " << tulosB << '\n';
}