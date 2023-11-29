#include <iostream>
#include <vector>

template <typename Temp>
class Stack {
private:
	std::vector<Temp> elements;

public:
	void push(const Temp& element) {
		elements.push_back(element);
	}

	Temp pop() {
		Temp top = elements.back();
		elements.pop_back();
		return top;
	}

	size_t size() const {
		return elements.size();
	}
};

int main() {
	Stack<int> intStack;
	intStack.push(1);
	intStack.push(2);
	intStack.push(3);

	std::cout << "Stack size: " << intStack.size() << '\n';
	std::cout << "Popped Stack: " << intStack.pop() << '\n';
	std::cout << "Stack size after pop: " << intStack.size() << '\n';

	Stack<std::string> stringStack;
	stringStack.push("Monkey");
	stringStack.push("Donkey");

	std::cout << "\nString stack size: " << stringStack.size() << '\n';
	std::cout << "Popped stack:  " << stringStack.pop() << '\n';
	std::cout << "String stack after pop: " << stringStack.size() << '\n';

	return 0;

}