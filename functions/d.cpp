/*
Напишите функцию, вычисляющую длину отрезка по координатам его концов. С помощью этой функции напишите программу, вычисляющую периметр треугольника по координатам трех его вершин.

Входные данные
На вход программе подается 6 целых чисел — координат x1,y1,x2,y2,x3,y3 вершин треугольника. Все числа по модулю не превосходят 30000.

Выходные данные
Выведите значение периметра этого треугольника с точностью до 6 знаков после десятичной точки.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float calc_distance(int x1, int y1, int x2, int y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float calc_perimeter(int x1, int y1, int x2, int y2, int x3, int y3) {
  return calc_distance(x1, y1, x2, y2) + calc_distance(x1, y1, x3, y3) + calc_distance(x2, y2, x3, y3);
}
int main() {
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  cout << fixed << setprecision(6) << calc_perimeter(x1, y1, x2, y2, x3, y3) << endl;
}
