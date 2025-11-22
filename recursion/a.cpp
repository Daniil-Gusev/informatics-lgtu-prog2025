/*
Для биномиальных коэффициентов (числа сочетаний из n по k) хорошо известна рекуррентная формула: Cnk=Cn-1k-1+Cn-1k, Cn0=Cnn=1.

Входные данные
Вводится 2 числа - n≤20 и k≤20.

Выходные данные
Необходимо вывести  значение Cnk
*/

#include <iostream>
using namespace std;

long long unsigned binomial_coeff(int n, int k) {
  if (k > n - k) {
    k = n - k;
  }
  if (k == 0 || k == n) {
    return 1;
  }
  if (k > n || k < 0) {
    return 0;
  }
  return binomial_coeff(n - 1, k - 1) + binomial_coeff(n - 1, k);
}

int main() {
  int n, k;
  cin >> n >> k;
  cout << binomial_coeff(n, k) << endl;
}