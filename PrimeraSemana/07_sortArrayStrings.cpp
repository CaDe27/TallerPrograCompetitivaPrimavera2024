#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef int64_t ll;

// regresa true si a va antes que b
bool menorQue(string a, string b) { return (a.size() < b.size()); }

int main() {
  string a[100];
  string siguienteString;
  int indice = 0, size = 0;
  cin >> siguienteString;
  while (siguienteString != "-1") {
    a[indice] = siguienteString;
    indice++;
    size++;
    cin >> siguienteString;
  }

  sort(a, a + size, menorQue);
  for (int i = 0; i < size; i++) {
    cout << a[i] << "\n";
  }
  return 0;
}