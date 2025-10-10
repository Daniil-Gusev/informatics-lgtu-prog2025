/*
По данным натуральным n и k вычислите значение Ckn=n!k!(n−k)! (число сочетаний из n элементов по k).

Входные данные
Вводятся 2 числа - n и k (n,k≤10).

Выходные данные
Необходимо вывести  значение Ckn
*/
#include <iostream>
int main() {
	int n, k;
	std::cin >> n;
	std::cin >> k;
	int fact_n, fact_k, fact_delta;
	fact_n = fact_k = fact_delta = 1;
	for (int i = 2; i <= n; i++) {
		fact_n *= i;
	}
	for (int i = 2; i <= k; i++) {
		fact_k *= i;
	}
	for (int i = 2; i <= n-k; i++) {
		fact_delta *= i;
	}
	std::cout << fact_n / (fact_k * fact_delta);
}