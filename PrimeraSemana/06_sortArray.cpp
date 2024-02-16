#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef int64_t ll;

int main() {
  int a[100];
  int siguienteNumero, indice = 0, size = 0;
  cin >> siguienteNumero;
  while (siguienteNumero != 0) {
    a[indice] = siguienteNumero;
    indice++;
    size++;
    cin >> siguienteNumero;
  }

  sort(a, a + size);
  for (int i = 0; i < size; i++) {
    cout << a[i] << "\n";
  }
  return 0;
}