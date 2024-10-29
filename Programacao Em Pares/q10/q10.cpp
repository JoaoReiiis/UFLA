#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nomeArquivo;
    cin >> nomeArquivo;

    ifstream arquivo(nomeArquivo);

    string representante1, representante2, representante3;
    arquivo >> representante1 >> representante2 >> representante3;

    int numVotos;
    arquivo >> numVotos;

    int votos1 = 0, votos2 = 0, votos3 = 0;
    string voto;

    for (int i = 0; i < numVotos; i++) {
        arquivo >> voto;
        if (voto == representante1) votos1++;
        else if (voto == representante2) votos2++;
        else if (voto == representante3) votos3++;
    }
    
    int maiorVotos = max(votos1, max(votos2, votos3));
    cout << maiorVotos << endl;

    return 0;
}