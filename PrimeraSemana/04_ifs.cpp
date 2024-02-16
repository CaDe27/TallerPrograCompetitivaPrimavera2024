#include <algorithm>
#include <iostream>
using namespace std;
typedef int64_t ll;

int main() {
  int opcion;
  // opcion == 1, opcion == 2
  cin >> opcion;
  if (opcion == 1) {
    opcion = 2;
    cout << "Hola";
  } else if (opcion == 2) {
    cout << "mundo";
  } else if (opcion == 3) {
    cout << "opcion3";
  } else if (opcion == 4) {
    cout << "opcion4";
  }
  return 0;
}