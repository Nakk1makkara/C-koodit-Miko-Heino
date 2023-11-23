#include <iostream>

class Lasku {
public:

	virtual double laske(double x, double y) const = 0;
};

class Yhteen : public Lasku {

public:

	double laske(double x, double y) const override {
		return x + y;
	}
};

class Kerro : public Lasku {

public: 
	double laske(double x, double y) const override {
		return x * y;
	}
};

int main() {

	Lasku* LaskuPointer = new Yhteen();

	double YhteenlaskuTulos = LaskuPointer->laske(10, 5);
	std::cout << "Yhteenlasku: " << YhteenlaskuTulos << '\n';

	delete LaskuPointer;
	LaskuPointer = new Kerro();

	double KertoTulos = LaskuPointer->laske(10, 5);
	std::cout << "Kertolasku : " << KertoTulos << '\n';

	delete LaskuPointer;

	return 0;
}