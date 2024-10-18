#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream entrada("jazida.txt");

    float maior_numero = 0;
    float numeros[7];
    string dia;
    int diaNumero;

    for (int i = 0; i < 7; i++)
    {
        entrada >> numeros[i];
        if (numeros[i] > maior_numero)
        {
            maior_numero = numeros[i];
            diaNumero = i+1;
        }
    }

    switch (diaNumero)
    {
    case 1:
        dia = "domingo";
        break;
    case 2:
        dia = "segunda-feira";
        break;
    case 3:
        dia = "terca-feira";
        break;
    case 4:
        dia = "quarta-feira";
        break;
    case 5:
        dia = "quinta-feira";
        break;
    case 6:
        dia = "sexta-feira";
        break;
    case 7:
        dia = "sabado";
        break;
    }

    cout << dia << endl
         << maior_numero;

    return 0;
}