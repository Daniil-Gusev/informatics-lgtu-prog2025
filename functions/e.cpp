/*
Напишите функцию для нахождения наибольшего общего делителя двух чисел с помощью алгоритма Евклида и используйте ее в программе для нахождения НОД уже n чисел.

Входные данные
На вход программе сначала подается значение n (2≤n≤100). В следующей строке находятся n целых неотрицательных чисел, не превосходящих 30000.

Выходные данные
Выведите НОД исходных чисел
*/

#include <iostream>
using namespace std;

int nod(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main() {
  int size, n, tmp;;
  cin >> size >> n >> tmp;
  int res = nod(n, tmp);
  for (int i = 2; i < size; i++) {
    cin >> tmp;
    res = nod(res, tmp);
    if (res == 1) {
      break;
    }
  }
  cout << res << endl;
}

