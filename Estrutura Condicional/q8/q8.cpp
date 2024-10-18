#include <iostream>
#include <cmath>

using namespace std;

struct dados
{
    int x;
    int y;
    float distancia;
    string estado;
};

int main()
{
    dados dados[3];
    float tempoBicicleta, tempoCarro = 0;

    cin >> dados[0].x >> dados[0].y >> dados[0].estado
    >> dados[1].x >> dados[1].y >> dados[1].estado
    >> dados[2].x >> dados[2].y >> dados[2].estado;
    
    dados[0].distancia = sqrt(pow(dados[0].x, 2) + pow(dados[0].y, 2));
    dados[1].distancia = sqrt(pow(dados[1].x - dados[0].x, 2) + pow(dados[1].y - dados[0].y, 2));
    dados[2].distancia = sqrt(pow(dados[2].x - dados[1].x, 2) + pow(dados[2].y - dados[1].y, 2));

    for (int i = 0; i < 3; i++)
    {
        if (dados[i].estado == "livre")
        {
            tempoCarro += dados[i].distancia * 5;
            tempoBicicleta += dados[i].distancia * 15;
        }
        else
        {   
            tempoCarro += dados[i].distancia * 24;
            tempoBicicleta += dados[i].distancia * 18;
        }
    }

    if(tempoBicicleta > tempoCarro){
        tempoCarro = ceil(tempoCarro);
        cout << "Carro " << tempoCarro;
    }else{
        tempoBicicleta = ceil(tempoBicicleta);
        cout << "Bicicleta " << tempoBicicleta;
    }

    return 0;
}