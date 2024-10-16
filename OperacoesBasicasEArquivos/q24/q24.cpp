#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int N;
    
    ifstream entrada("entrada.txt");
    if (entrada.is_open()) {
        entrada >> N;
        entrada.close();
    } else {
        return 1;
    }

    int dig1 = (N / 100000) % 10;
    int dig2 = (N / 10000) % 10;
    int dig3 = (N / 1000) % 10;
    int dig4 = (N / 100) % 10;
    int dig5 = (N / 10) % 10;
    int dig6 = N % 10;

    int M = (dig1 / dig2) * 10000
          + (dig2 / dig3) * 1000
          + (dig3 / dig4) * 100
          + (dig4 / dig5) * 10
          + (dig5 / dig6);

    ofstream saida("saida.txt");
    if (saida.is_open()) {
        saida << M;
        saida.close();
    } else {
        return 1;
    }

    return 0;
}