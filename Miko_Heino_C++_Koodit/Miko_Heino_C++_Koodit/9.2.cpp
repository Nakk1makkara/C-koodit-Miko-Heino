#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

std::string readFromFile(const std::string& fileName) {
	std::ifstream file(fileName);

	if (!file.is_open()) {
		throw std::runtime_error("Tiedoston avaaminen ei onnistunut.");
	}

	std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

	return fileContent;
}

int main() {
	std::string fileName;
	std::cout << " tiedoston nimi: ";
	std::cin >> fileName;

	try {
		std::string content = readFromFile(fileName);
		std::cout << "sisältö :\n" << content << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "virhe : " <<  e.what() << std::endl;
	}

	return 0;
}