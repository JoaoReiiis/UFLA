#include <iostream>
#include <fstream>

using namespace std;

int main (){
    string arquivo, moeda1, moeda2, moeda3;
    float aposta;

    cin >> arquivo;
    
    ifstream entrada (arquivo);
    
    entrada >> moeda1 >> moeda2 >> moeda3 >> aposta;

    if(moeda1 == "CARA" && moeda2 == "CARA" && moeda3 == "CARA"){
        cout << aposta*2;
    }else if((moeda1 == "CARA" && moeda2 == "CARA") || (moeda2 == "CARA" && moeda3 == "CARA")){
        cout << aposta*1.5;
    }else{
        cout << aposta*0;
    }

    return 0;
}