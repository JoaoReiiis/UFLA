#include <fstream>
#include <iostream>

using namespace std;

int main(){

    float salarioBase, salarioComDesconto, salarioLiquido, grat, desconto, salarioBruto;

    cin >> salarioBase >> grat >> desconto;
    
    salarioBruto = salarioBase + grat;
    salarioComDesconto = salarioBruto * (desconto/100);
    salarioLiquido = salarioBruto - salarioComDesconto;

    ofstream saida ("holerite.txt");

    saida.precision(2);
    saida << fixed;
    saida << salarioBruto << endl << salarioComDesconto << endl << salarioLiquido;
    return 0;
}