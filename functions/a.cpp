/*
Напишите функцию int min (int a, int b, int c, int d) (C/C++), static int min (int a, int b, int c, int d) (Java) function min (a,b,c,d: integer):integer (Pascal), находящую наименьшее из четырех данных чисел.

Входные данные
Вводится четыре числа.

Выходные данные
Необходимо вывести  наименьшее из 4-х данных чисел.
*/

#include <iostream>
using namespace std;

int min(int a, int b, int c, int d) {
  int m1 = a;
  if (b < m1) {
    m1 = b;
  }
  int m2 = c;
  if (d < m2) {
    m2 = d;
  }
  if (m1 < m2) {
    return m1;
  }
  return m2;
}

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << min(a, b, c, d) << endl;
}
