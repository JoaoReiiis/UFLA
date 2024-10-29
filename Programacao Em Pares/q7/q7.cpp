#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nomeArquivo, palavra;
    cin >> nomeArquivo >> palavra;

    ifstream arquivo(nomeArquivo);

    string linha;
    int contador = 0;

    while (arquivo >> linha) {
        if (linha == palavra) {
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}
