#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    float graus, fracao;
    int inteira, minutos, segundos;

    cin >> graus;


    inteira = (int) graus;
    minutos = (graus - inteira) * 60;
    fracao = (graus - inteira) * 60;
    segundos = (int)((fracao - minutos) * 60);

    ofstream saida ("coordenadas.txt");
    saida << inteira << endl << minutos << endl << segundos;

}