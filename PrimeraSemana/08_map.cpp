#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;
typedef int64_t ll;

int main() {
  map<string, int> calificacion;
  calificacion["Carlos"] = 20;
  calificacion["Antonioo"] = 100;
  calificacion["Jose"] = 30;
  calificacion["Alexa"] = 300;
  for (auto it = calificacion.begin(); it != calificacion.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  return 0;
}