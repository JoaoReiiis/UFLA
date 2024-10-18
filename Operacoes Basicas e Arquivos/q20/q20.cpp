#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    ifstream entrada ("entrada.txt");
    ofstream saida ("saida.txt");

    float m2, valorGalao, vTinta;
    int nLatas;

    entrada >> m2 >> valorGalao;

    nLatas = ceil(m2/54);
    vTinta = nLatas*valorGalao;

    saida.precision(2);
    saida << fixed;
    saida << nLatas << endl << vTinta;
    return 0;
}