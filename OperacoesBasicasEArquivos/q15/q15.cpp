#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int valorCompra, valorRecebido, troco, n20, n10, n5, n2, n1;
    
    ifstream entrada ("entrada.txt");
    entrada >> valorRecebido >> valorCompra;
    troco = valorRecebido - valorCompra;

    n20 = troco/20;
    n10 =  (troco - n20*20)/10;
    n5 = (troco - (n20*20) - (n10*10))/5;
    n2 = (troco - (n20*20) - (n10*10) - (n5*5))/2;
    n1 = (troco - (n20*20) - (n10*10) - (n5*5) - (n2*2));

    ofstream saida ("saida.txt");
    saida << n20 << endl << n10 << endl << n5 << endl << n2 << endl << n1;
    return 0;
}