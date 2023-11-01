#include <iostream>
#include <limits>

int main() {
		std::cout << "Pelataan kiinalaista numeropeliä" << '\n';

		while (true) {
			int userNumber;
			std::cout << "Anna luku: ";
			std::cin >> userNumber;

			if (userNumber == 0) {
				std::cout << "Peli Loppu!" << '\n';
				break;
			}
			else {
				if (userNumber == std::numeric_limits<int>::max()) {
					std::cout << "Tasapeli!" << '\n';
				}
				else {
					int gameNumber = userNumber + 1;
					std::cout << "Voitin, numeroni on " << gameNumber << '\n';
				}
			}
		}
		return 0;
}