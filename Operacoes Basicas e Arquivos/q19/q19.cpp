#include <fstream>
#include <iostream>

using namespace std;

int main (){
    ifstream entrada ("tempo.txt");
    int ms, minuto, hora, s;
    float segundo;

    entrada >> ms;

    entrada.close();

    s = ms/1000;
    segundo = (s%60) + (ms%1000)/1000.0;
    minuto = (s%3600)/60;
    hora = s/3600;

    ofstream saida ("horario.txt");

    saida << hora << ":" << minuto << ":" << segundo;
    saida.close();
    return 0;
}