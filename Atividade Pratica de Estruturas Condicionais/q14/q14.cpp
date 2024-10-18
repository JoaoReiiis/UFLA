#include <iostream>
#include <string>

using namespace std;

int main() {
    string cor1, cor2;
    string numero;

    cin >> cor1 >> cor2 >> numero;

    bool eh_palindromo = true;
    int tamanho = numero.length();
    
    for (int i = 0; i < tamanho / 2; i++) {
        if (numero[i] != numero[tamanho - i - 1]) {
            eh_palindromo = false;
            break;
        }
    }

    if (eh_palindromo) {
        cout << cor1 << endl;
    } else {
        cout << cor2 << endl;
    }

    return 0;
}