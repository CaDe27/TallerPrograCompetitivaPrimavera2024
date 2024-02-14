#include <iostream>
#include <algorithm>
using namespace std;
typedef int64_t ll;
 
int main(){
    int n;
    string resp;
    //  Lee n 
    cin>>n;
 
    // Si n es 2 o es impar 
    // la respuesta es no 
    if(n == 2 || n%2 == 1){
        resp = "NO";
    }
    // Else  
    // La respuesta es si 
    else{
        resp = "YES";
    }
 
    // Imprime la respuesta 
    cout<<resp<<"\n";
    return 0;
}