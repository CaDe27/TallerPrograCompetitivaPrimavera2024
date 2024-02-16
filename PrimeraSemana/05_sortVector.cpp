#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef int64_t ll;

int main() {
  vector<int> a;
  int siguienteNumero;
  cin>>siguienteNumero;
  while( siguienteNumero != 0){
    a.push_back(siguienteNumero);
    cin>>siguienteNumero;
  }

  sort(a.begin(), a.end());
  for(int i = 0; i < a.size(); i++){
    cout<<a[i]<<"\n";
  }
  return 0;
}