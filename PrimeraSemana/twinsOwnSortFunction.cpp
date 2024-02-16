// Link problema: https://codeforces.com/problemset/problem/160/A
#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;
typedef int64_t ll;

bool leGanoHermano(int sumaMonedas, int sumaTotal) {
  int sumaMonedasHermano = sumaTotal - sumaMonedas;
  if (sumaMonedas > sumaMonedasHermano)
    return true;
  else
    return false;
}

bool isGreater(int a, int b) { return a > b; };
int main() {
  // leo la cantidad de datos
  int n;
  cin >> n;

  // leo las monedas
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  // calculo la suma de todas las monedas
  int sumaTotal = 0;
  for (int i = 0; i < n; ++i) {
    sumaTotal += a[i];
  }

  // ordeno las monedas
  sort(a.begin(), a.end(), isGreater);

  // itero desde la moneda mas grande hasta la mas pequeña
  // y sigo hasta que le gane al hermano
  int cantidad = 0, sumaMonedas = 0, i = 0;
  while (!leGanoHermano(sumaMonedas, sumaTotal)) {
    sumaMonedas += a[i];
    cantidad++;
    i++;
  }

  // imprimo la cantidad de monedas
  cout << cantidad << endl;
  return 0;
}