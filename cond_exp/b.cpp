/*
Входные данные
Даны три целых числа, каждое записано в отдельной строке.

Выходные данные
Выведите наибольшее из данных чисел (программа должна вывести ровно одно целое число).
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  cout << max(max(a, b), c);
}