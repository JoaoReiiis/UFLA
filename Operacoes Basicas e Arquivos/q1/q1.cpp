#include <iostream>
#include <fstream>

using namespace std;

int main (){
    string nome;
    cin >> nome;

    ifstream entrada (nome);
    string palavra;
    entrada >> palavra;
    cout << palavra;

    return 0;
}