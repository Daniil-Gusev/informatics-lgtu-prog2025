/*
Напишите "функцию голосования" bool Election(bool x, bool y, bool z) (C/C++), function Election (x, y, z:boolean): boolean (Pascal), возвращающую то значение (true или false), которое среди значений ее аргументов x, y, z встречается чаще.

Входные данные
Вводится 3 числа - x, y и z (x, y и z равны 0 или 1, 0 соответствует значению false, 1 соответствует значению true).

Выходные данные
Необходимо вывести  значение функции от x, y и z.
*/

#include <iostream>
using namespace std;

bool Election(bool x, bool y, bool z) {
  if (x == y) {
    return x;
  }
  return z;
}

int main() {
  bool x, y, z;
  cin >> x >> y >> z;
  cout << Election(x, y, z) << endl;
}