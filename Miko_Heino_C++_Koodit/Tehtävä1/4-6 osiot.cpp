#include <iostream>
#include <ctime>
#include <cstdlib>

int randomNumber(int lowerLimit, int upperLimit) {
	return rand() % (upperLimit - lowerLimit + 1) + lowerLimit;
}

int askAnswer(int lowerLimit, int upperLimit) {
	int guess;
	do {
		std::cout << "Arvaa luku väliltä (" << lowerLimit << "-" << upperLimit << ") : ";
		std::cin >> guess;
	} while (guess < lowerLimit || guess > upperLimit);
	return guess;
}

bool checkAnswer(int guessedNumber, int guess, int& guessAmount) {
	guessAmount++;
	if (guess < guessedNumber) {
		std::cout << "Liian pieni" << '\n';
		return false;
	}
	else if (guess > guessedNumber) {
		std::cout << "Liian suuri!" << '\n';
		return false;
	}
	else {
		std::cout << "Oikein, arvasit " << guessAmount << " kertaa." << '\n';
		return true;
	}
}

int main() {
	srand(static_cast<unsigned>(time(nullptr)));

	int lowerLimit, upperLimit;
	std::cout << "Määritä ala ja yläraja: ";
	std::cin >> lowerLimit >> upperLimit;

	int guessedNumber = randomNumber(lowerLimit, upperLimit);
	int guess, guessAmount = 0;

	while (true) {
		guess = askAnswer(lowerLimit, upperLimit);
		if (checkAnswer(guessedNumber, guess, guessAmount)) {
			break;
		}
		return 0;
	}
}