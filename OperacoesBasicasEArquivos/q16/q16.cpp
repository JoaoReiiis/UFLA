#include <fstream>

using namespace std;

int main()
{
    ifstream entrada("valor.txt");

    float valor, desconto, prestacao4x, prestacao10x;
    entrada >> valor;

    desconto = valor*0.92;
    prestacao4x = valor/4;
    prestacao10x = (valor*1.1)/10;

    ofstream saida ("opcoes.txt");

    saida.precision(2);
    saida << fixed;
    saida << desconto << endl << prestacao4x << endl << prestacao10x;

    return 0;
}