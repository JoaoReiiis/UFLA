#include <iostream>

using namespace std;

int main()
{
    int numero, contador = 0;
    float media = 0,  positivos = 0, negativos = 0;

    while (numero != 0)
    {

        cin >> numero;

        media += numero;

        if (numero > 0)
            positivos++;
        else if(numero != 0)
            negativos++;

        if(numero != 0) contador++;
    }

    media = media/contador;

    cout << media << endl << positivos << endl << negativos << endl
    << positivos/contador << endl << negativos/contador;

    return 0;
}