#include <iostream>
#include <vector>

class Hevonen {
private:
	double kavio;

public:
	Hevonen(double koko) : kavio(koko) {}

	double getkavio() const {
		return kavio;
	}

	bool operator<(const Hevonen& toinen) const {
		return kavio < toinen.kavio;
	}
	
};

template <typename Temp>

void bubbleSort(Temp arr[], int koko) {
	for (int i = 0; i < koko - 1; ++i) {
		for (int j = 0; j < koko - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				Temp temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

template <typename Temp>
void TaulukkoTulostus(const Temp arr[], int koko) {
	for (int i = 0; i < koko; ++i) {
		std::cout << arr[i].getkavio() << " ";
	}
	std::cout << '\n';
}

int main() {
	Hevonen taulukkoH[] = { Hevonen(10.1), Hevonen(10.2), Hevonen(10.3), Hevonen(10.4) };
	int TaulukkoHkoko = sizeof(taulukkoH) / sizeof(taulukkoH[0]);

	std::cout << "Alkuperäinen taulukko: ";
	TaulukkoTulostus(taulukkoH, TaulukkoHkoko);

	bubbleSort(taulukkoH, TaulukkoHkoko);

	std::cout << "Lajiteltu taulukko: ";
	TaulukkoTulostus(taulukkoH, TaulukkoHkoko);

	return 0;
}