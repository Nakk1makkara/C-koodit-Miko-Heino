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
		std::cout << "sy�t� kokonaisluku taulukkoon";
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
	std::cout << "Sy�t� taulukon koko: ";
	std::cin >> koko;

	int* taulukko = varaaTaulukko(koko);
	
	lueArvot(taulukko, koko);
	kanna(taulukko, koko);
	std::cout << "K��nnetty taulukko: ";
	tulostaArvot(taulukko, koko);

	delete[] taulukko;

	return 0;

}