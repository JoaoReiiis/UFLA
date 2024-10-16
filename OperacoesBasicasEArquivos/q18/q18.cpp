#include <fstream>
#include <iostream>

using namespace std;

int main (){
    ifstream entrada ("chaves.txt");
    int chaves[3], restos[3], numero;
    cin >> numero;

    entrada >> chaves[0] >> chaves[1] >> chaves[2];
    for(int i = 0; i <=3; i++){
        restos[i] = numero % chaves[i];
    }

    ofstream saida ("codigo.txt");
    saida << restos[0] << endl << restos[1] << endl << restos[2];
    return 0;
}