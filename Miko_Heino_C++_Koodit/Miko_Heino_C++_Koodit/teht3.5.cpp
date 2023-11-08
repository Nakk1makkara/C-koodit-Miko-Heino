#include <iostream>

int* varaaTaulukko(int n) {

	int* taulukko = new int[n];

	if (taulukko == nullptr) {
		return nullptr;
	}

	return taulukko;
}

void lueArvot(int* t, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "syötä kokonaisluku taulukkoon";
		std::cin >> t[i];
	}
}

void kanna(int* t, int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp = t[i];
		t[i] = t[n - i - 1];
		t[n - i - 1] = temp;
	}
}

void tulostaArvot(const int* t, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << t[i] << " ";
	}
	std::cout << '\n';
}

int main() {

	int koko;
	std::cout << "Syötä taulukon koko: ";
	std::cin >> koko;

	int* taulukko = varaaTaulukko(koko);
	
	lueArvot(taulukko, koko);
	kanna(taulukko, koko);
	std::cout << "Käännetty taulukko: ";
	tulostaArvot(taulukko, koko);

	delete[] taulukko;

	return 0;

}