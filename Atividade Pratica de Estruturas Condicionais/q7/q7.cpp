#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int codigo;
    float peso;
    int pais;
    float preco;
    float imposto;

    cin >> codigo >> peso >> pais;

    if(codigo < 5){
        preco = peso*10000;
    }else if(codigo > 4 && codigo < 8){
        preco = peso*25000;
    }else if(codigo > 7 && codigo <= 10){
        preco = peso*35000;
    }


    if(pais == 1){
        imposto = 0;
    }else if(pais == 2){
        imposto = 0.15;
    }else if(pais == 3){
        imposto = 0.25;
    }

    cout << fixed << setprecision(1) << peso*1000 << endl << preco << endl << preco*imposto << endl << preco + preco*imposto;

    return 0;
}