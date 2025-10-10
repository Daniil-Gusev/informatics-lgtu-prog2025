/*
Дана последовательность натуральных чисел, завершающаяся число 0. Определите наибольшую длину монотонного фрагмента последовательности (то есть такого фрагмента, где все элементы либо больше предыдущего, либо меньше).

Числа, следующие за числом 0, считывать не нужно.

Входные данные
Дана последовательность натуральных чисел, завершающаяся число 0.

Выходные данные
Выведите ответ на задачу.
*/

#include <iostream>

int main() {
	const int size = 2000000;
	int nums[size];
	int max_i = 0;
	for (int i = 0; i < size; i++) {
		std::cin >> nums[i];
		if (nums[i] == 0) {
			max_i = i - 1;
			break;
		}
	}
	if (max_i == 0) {
		std::cout << 1;
		return 0;
	}
	bool great, less;
	int cur_len = 1, max_len = 1;
	for (int j = 1; j <= max_i; j++) {
		if (nums[j] > nums[j - 1]) {
			if (great) {
				cur_len++;
			} else {
				great = true;
				less = false;
				cur_len = 2;
			}
		} else if (nums[j] < nums[j - 1]) {
			if (less) {
				cur_len++;
			} else {
				less = true;
				great = false;
				cur_len = 2;
			}
		} else {
			cur_len = 1;
			great = false;
			less = false;
		}
		if (cur_len > max_len) {
			max_len = cur_len;
		}
	}
	std::cout << max_len;
}