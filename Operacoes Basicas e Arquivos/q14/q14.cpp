#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream entrada ("entrada.txt");
    float saldo, salario, d1, d2;

    entrada >> salario >> d1 >> d2;

    saldo = salario - (d1*1.0038) - (d2*1.0038);

    cout << saldo;
    return 0;
}