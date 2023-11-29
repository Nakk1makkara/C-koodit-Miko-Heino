#include <iostream>

template <typename Temp>
void bubbleSort(Temp arr[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				Temp temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

template <typename Temp>
void printArray(const Temp arr[], int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << "";
	}
	std::cout << '\n';
}

int main() {
	float floatArray[] = { 1.1, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8 };
	int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);

	std::cout << "Original floatarray: ";
	printArray(floatArray, floatSize);

	bubbleSort(floatArray, floatSize);

	std::cout << "Sorted floatarray: ";
	printArray(floatArray, floatSize);

	int intArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int intSize = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Original intarray: ";
	printArray(intArray, intSize);

	bubbleSort(intArray, intSize);

	std::cout << "sorted intarray: ";
	printArray(intArray, intSize);

	return 0;

}

