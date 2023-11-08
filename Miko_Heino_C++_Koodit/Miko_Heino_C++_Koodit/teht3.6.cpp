#include <iostream>

int* taulukko;
int koko;


int* varaaTaulukko(int n) {

	int* t = new int[n];

	if (t == nullptr) {
		return nullptr;
	}

	return t;
}

void lueArvot() {
	for (int i = 0; i < koko; i++) {
		std::cout << "syötä kokonaisluku taulukkoon";
		std::cin >> taulukko[i];
	}
}

void kanna() {
	for (int i = 0; i < koko / 2; i++) {
		int temp = taulukko[i];
		taulukko[i] = taulukko[koko - i - 1];
		taulukko[koko - i - 1] = temp;
	}
}

void tulostaArvot() {
	for (int i = 0; i < koko; i++) {
		std::cout << taulukko[i] << " ";
	}
	std::cout << '\n';
}

int main() {

	std::cout << "Syötä taulukon koko: ";
	std::cin >> koko;

	taulukko = varaaTaulukko(koko);

	lueArvot();
	kanna();
	std::cout << "Käännetty taulukko: ";
	tulostaArvot();

	delete[] taulukko;

	return 0;

}