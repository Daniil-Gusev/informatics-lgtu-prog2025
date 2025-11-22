/*
Проверьте, является ли число простым.

Входные данные
Вводится одно натуральное число n не превышающее 2000000000 и не равное 1.

Выходные данные
Необходимо вывести  строку prime, если число простое, или composite, если число составное.
*/

#include <iostream>
using namespace std;

bool is_prime(long long n) {
  if (n < 4) {
    return n == 2 || n == 3;
  }
  if (n % 2 == 0 || n % 3 == 0) {
    return false;
  }
  for (long long i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  long long n;
  cin >> n;
  if (is_prime(n)) {
    cout << "prime\n";
  } else {
    cout << "composite\n";
  }
}