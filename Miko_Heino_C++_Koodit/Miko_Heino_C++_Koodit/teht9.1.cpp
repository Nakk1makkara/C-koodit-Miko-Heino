#include <iostream>

int main() {
	const int size = 1024;
	int* newArray = nullptr;
	char* mallocArray = nullptr;
	int allocations = 0;

	while (true) {
		newArray = new(std::nothrow) int[size];
		if (newArray) {
			allocations++;
		}
		else {
			std::cout << " new ep�onnistui" << allocations << " muistin varauksen j�lkeen\n";
			break;
		}

	}

	allocations = 0;

	while (true) {
		mallocArray = static_cast<char*>(malloc(size * sizeof(char)));
		if (mallocArray) {
			allocations++;
		}
		else {
			std::cout << "malloc ep�onnistui" << allocations << " muistin varauksen j�lkeen\n";
			break;
		}
	}

	delete[] newArray;
	free(mallocArray);

	return 0;

}