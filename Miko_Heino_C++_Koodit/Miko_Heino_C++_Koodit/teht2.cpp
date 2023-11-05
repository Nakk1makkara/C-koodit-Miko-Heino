#include <iostream>

int main() {
	int x = 10;
	int* y = &x;

	std::cout << "Muuttuja x osoite muistissa: " << &x << '\n';
	std::cout << "Muuttuja x arvo: " << x << '\n';
	std::cout << "Muuttuja y osoite muistissa: " << &y << '\n';
	std::cout << "Muuttuja y arvo muistissa: " << y << '\n';

	return 0
}