#include <iostream>
#include <string>
#include <typeinfo>


template <typename Type>
auto id(Type x) {
	return  typeid(x).name();
}

int main()
{
	int int1 = 3;
	double double1 = 3.141592;
	char char1 = '8';
	const std::string string1 = std::string("Qué pedo");

	const char* cchar1 = nullptr;
	const char* cchar2 = "Ohayou sekai";
	auto auto1 = "auto";
	decltype(auto1) y = "y";

	std::cout << "-- What type is it? --\n"
		<< "int1 \t" << id(int1) << "\n"
		<< "double1 \t" << id(double1) << "\n"
		<< "char1 \t" << id(char1) << "\n"
		<< "string \t" << id(string1) << "\n"
		<< "cchar1 \t" << id(cchar1) << "\n"
		<< "cchar2 \t" << id(cchar2) << "\n"
		<< "auto1 \t" << id(auto1) << "\n"
		<< "decltype1 \t" << id(y) << "\n\n";

	std::cout << "-- Iterator --\n";

	for (auto i : string1)
	{
		std::cout << i << "\n";
	}

	std::cout << "\n";

	for (auto i = string1.end() - 1; i != string1.begin(); i--) {
		std::cout << *i << "\n";
	}

	return 0;
}
