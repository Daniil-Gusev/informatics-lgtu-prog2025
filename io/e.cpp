/*
Дано трехзначное число. Найдите сумму его цифр.

Входные данные
Вводится трехзначное число.

Выходные данные
Выведите ответ на задачу.
*/

#include <iostream>
using namespace std;

int main() {
  int a, s;
  s = 0;
  cin >> a;
  for (int i = 0; i < 3; i++) {
    s += a % 10;
    a = a / 10;
  }
  cout << s;
  return 0;
}