#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream entrada("venda.txt");
    float valor, valorFinal, prestacoes;

    entrada >> valor >> prestacoes;
    entrada.close();

    valorFinal = valor*1.1*0.9;

    ofstream saida ("cliente.txt");
    saida << fixed << setprecision(1) << valor*1.1 << endl << (valor*1.1)/prestacoes << endl << valorFinal/prestacoes << endl << valorFinal;
    saida.close();
    return 0;
}