#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    float notas[3], media;
    char conceito = 'X';

    cin >> notas[0] >> notas[1] >> notas [2];

    media = ((notas[0] * 2) + (notas[1] * 3) + (notas[2] * 5))/(2+3+5);

    if(media >= 8){
        conceito = 'A';
    }else if(media >= 7){
        conceito = 'B';
    }else if(media >= 6){
        conceito = 'C';
    }else if(media >= 5){
        conceito = 'D';
    }else{
        conceito = 'E';
    }

    cout << media << endl << conceito;
    return 0;
}