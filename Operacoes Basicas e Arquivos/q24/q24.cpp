#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{

    ifstream entrada("dados.txt");
    float preco, lucro, impostos;

    entrada >> preco >> lucro >> impostos;
    entrada.close();

    ofstream saida("custo.txt");

    float lucroDistribuidor, totalImpostos, precoFinal;

    lucroDistribuidor = preco * lucro;
    totalImpostos = preco * impostos;
    precoFinal = lucroDistribuidor + totalImpostos + preco;

    saida << fixed << setprecision(2) << lucroDistribuidor << endl << totalImpostos << endl << precoFinal;

    saida.close();
        return 0;
}