#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    string categoria;
    int dias;
    float km, valor;

    cin >> categoria >> dias >> km;
    //cout << fixed << setprecision(2);
    if(categoria == "ECONOMICO"){
        valor = (88.00* dias) + (km*1.15);
        cout << "R$ " << valor << endl << "Carros a disposição: Fiat Uno 1.0, Fiat Mobi 1.0, Renault Kwid 1.0, VW Gol 1.0, Ford Ka 1.0, Renault Sandero 1.0, Onix Joy 1.0";
    }else if(categoria == "INTERMEDIARIO"){
        valor = (197.00 * dias) + (km*1.56);
        cout << "R$ " << valor << endl << "Carros a disposição: HB20 1.6, VW Gol 1.6, Renault Sandero 1.0, Fiat Cronos 1.3, Onix 1.0 Turbo, Nissan Versa FAST";
    }else if(categoria == "PRIME"){
        valor = (265.00*dias) + (2.89*km);
        cout << "R$ " << valor << endl << "Carros a disposição: Ford Ecoesport 1.5, Renault Duster 1.6, Nissan Kicks 1.6, VW Nivus 1.6, Fiat Pulse 1.6, Chery Tiggo 3X Turbo";
    }else if(categoria == "ESPECIAIS"){
        valor = (335.00*dias) + (3.40*km);
        cout << "R$ " << valor << endl << "Carros a disposição: Jeep Compass 4x4 Diesel, Mitsubishi Pajero 2.4 Diesel, Mercedes C180, Toyota Corola Cross, VW Taos Highline, Mitsubishi Eclipse Cross";
    }else{
        return 0;
    }

    return 0;
}