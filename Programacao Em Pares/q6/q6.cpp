#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string nomeArquivo;
    cin >> nomeArquivo;

    ifstream arquivo(nomeArquivo);


    char c;
    int contador = 0;

    while (arquivo.get(c)) {
        if (c != ' ' && c != '\n') {
            contador++;
        }
    }

    arquivo.close();
    cout << contador << endl;

    return 0;
}