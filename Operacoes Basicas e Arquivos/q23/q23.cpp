#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream entrada("entrada.txt");
    int numero, a1, a2, a3, a4, a5, a6;

    entrada >> numero;

    entrada.close();

    a1 = numero / 100000;
    a2 = (numero % 100000) / 10000;
    a3 = (numero % 10000) / 1000;
    a4 = (numero % 1000) / 100;
    a5 = (numero % 100) / 10;
    a6 = (numero % 10);

    ofstream saida ("saida.txt");
    //cout  << a1 << endl << a2 << endl << a3 << endl << a4 << endl << a5 << endl << a6 << endl;

    saida << a1 / a2 << a2 / a3 << a3 / a4 << a4 / a5 << a5 / a6;

    saida.close();
    return 0;
}