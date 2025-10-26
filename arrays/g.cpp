/*
Дана последовательность натуральных чисел 1, 2, 3, ..., N (1 ≤ N ≤ 1000). Необходимо сначала расположить в обратном порядке часть этой последовательности от элемента с номером A до элемента с номером B, а затем от C до D (A < B; C < D; 1 ≤ A, B, C, D ≤ N).

Входные данные
Вводятся натуральные числа числа N, A, B, C, D.

Выходные данные
Требуется вывести полученную последовательность.
*/

#include <iostream>
using namespace std;

int main() {
  int n, a, b, c, d, arr[1000];
  cin >> n >> a >> b >> c >> d;
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
  for (int n = 1; n <= (b - a)/2 + (b - a)%2; n++) {
    int i = a - 2 + n, j = b - n;
    arr[i] = arr[i] ^ arr[j];
    arr[j] = arr[i] ^ arr[j];
    arr[i] = arr[i] ^ arr[j];
  }
  for (int n = 1; n <= (d - c)/2 + (d - c)%2; n++) {
    int i = c - 2 + n, j = d - n;
    arr[i] = arr[i] ^ arr[j];
    arr[j] = arr[i] ^ arr[j];
    arr[i] = arr[i] ^ arr[j];
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
}