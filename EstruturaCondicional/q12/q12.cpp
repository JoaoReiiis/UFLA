#include <fstream>
#include <iostream>

using namespace std;

int main () {
    int dias, horas, minutos, minRes;

    ifstream entrada ("alarme.txt");
    
    entrada >> dias >> horas >> minutos >> minRes;

    minutos += minRes; 
    
    if(minutos >= 60){
        horas += minutos/60;
        minutos = minutos % 60; 
    }

    if(horas >= 24){
        dias += horas/24;
        horas = horas % 24;
    }

    cout << dias << " " << horas << " " << minutos;

    return 0;
}