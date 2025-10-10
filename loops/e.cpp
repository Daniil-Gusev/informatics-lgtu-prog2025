/*
Переведите натуральное число из двоичной системы в десятичную (в двоичном числе не более 10 цифр).

Входные данные
Вводится натуральное число, записанное в двоичной системе.

Выходные данные
Выведите число, записанное в десятичной системе.
*/

#include <iostream>

int main() {
	int bin;
	std::cin >> bin;
	int dec = 0;
	for (int i = 1; bin > 0; i *= 2) {
		switch (bin % 10) {
			case 0:
				break;
			case 1:
				dec += i;
				break;
			default:
				std::cout << "Error: incorrect value!\n";
				return 1;
		}
		bin /= 10;
	}
	std::cout << dec;
}