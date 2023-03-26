#include <iostream>
#include "fibonacci.h"

int main()
{
	int number = 0;
	std::cout << "Введите число: ";
	std::cin >> number;
	std::cout << "Числа Фибоначчи: ";

	for (int i = 0; i <= number; i++) {
		std::cout << fibonacci(i) << ' ';
	}

	return 0;
}