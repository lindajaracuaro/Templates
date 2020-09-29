#include <iostream>

long double constexpr PI = 3.1415926535897932385L;

template<typename Area>
Area area(Area& r) {
	return r * r * PI;
}

template<typename Area>
Area constexpr pi = Area(3.1415926535897932385L);


template <typename Mistake>
Mistake mistake(Mistake x) {
	return PI - x;
}

int main()
{
	long double r;
	std::cout << "Insert radio\t";
	std::cin >> r;
	std::cout.precision(15);
	std::cout << "The area is\t"
		<< area<long double>(r);
	std::cout.precision(20);
	std::cout << "\n\n-- Specifying the type --"
		<< "\nUsing float\t\t" << pi<float> << "\t Mistake\t" << mistake(pi<float>)
		<< "\nUsing double\t\t" << pi<double> << "\t Mistake\t" << mistake(pi <double>)
		<< "\nUsing long double\t" << pi<long double> << "\t Mistake\t" << mistake(pi<long double>);



	return 0;
}