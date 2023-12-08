#include <iostream>
#include <string.h>
#include <functional> 
#include <algorithm>


class Way {
public:
	//ищет длину пути
	double operator()(double velocity, double time) {
		std::cout << "ƒлина пути: ";
		return velocity * time;
	}
private:
};

class Spin {
public:
	//ищет скорость вращени€
	double operator()(double time) {
		std::cout << "”глова€ скорость: ";
		double result = (2 * 3.14) / time;
		return ::round(result * 100) / 100;
	}
private:
};

int main() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	Way find;
	std::cout << find(6.9, 3) << "\n";

	Spin find2;
	std::cout << find2(6) << "\n";


	return 0;
}