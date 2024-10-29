#include <iostream>
#include <cmath> 
using namespace std;
int main(){

int numero1, numero2, contador;
cin >> numero1 >> numero2;
contador = 0;
while(numero1>0 && numero1>=numero2) {
contador++;
numero1 = numero1 - numero2;
}
cout << contador;

return 0;
}