#include <fstream>
#include <iostream>

using namespace std;

int main (){
    ifstream entrada ("tempo.txt");
    int tempo, ms, minuto, hora;
    float segundo,restoms;

    entrada >> ms;
    restoms = ms%(60*1000);
    segundo = restoms/1000;
    minuto = ms/(0000)%60;
    hora = ms/(1000*60*60);

    ofstream saida ("horario.txt");

    saida << hora << ":" << minuto << ":" << segundo;

    return 0;
}