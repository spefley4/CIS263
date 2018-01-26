#include <iostream>
#include <string>

template<typename T>

void printStuff(T s) {

	std::cout << s << std::endl;

}

int main(int argc, char** argv) {

	int x = 42;
	float pi = 3.14159;
	std::string i = "ira";

	printStuff(x);
	printStuff(pi);
	printStuff(i);

}
