#include <fstream>
#include <iostream>

using namespace std;

int main (){
    ifstream entrada ("investigacao.txt");

    string suspeitos[3], respostas[5];
    int sims=0;

    entrada >> suspeitos[0] >> suspeitos[1] >> suspeitos[2] >>
    respostas[0] >> respostas[1] >> respostas[2] >> respostas[3] >> respostas[4];

    for(int i = 0; i < 5; i++){
        if(respostas[i] == "sim") sims++;
    }

    if(sims == 5){
        cout << suspeitos[2];
    }else if(sims == 3 || sims == 4){
        cout << suspeitos[1];
    }else if(sims == 2){
        cout << suspeitos[0];
    }else{
        cout << suspeitos[0] << " " << suspeitos[1] << " " << suspeitos[2];
    }

}