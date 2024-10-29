#include <iostream>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;

    double altura, maiorAltura = 0, menorAltura = numeric_limits<double>::max();
    double somaMulheres = 0, somaHomens = 0;
    int contMulheres = 0, contHomens = 0;

    for (int i = 0; i < n; i++) {
        cin >> altura;
        char genero;
        cin >> genero;

        if (altura > maiorAltura) maiorAltura = altura;
        if (altura < menorAltura) menorAltura = altura;

        if (genero == 'f') {
            somaMulheres += altura;
            contMulheres++;
        } else if (genero == 'm') {
            somaHomens += altura;
            contHomens++;
        }
    }

    cout << maiorAltura << endl;
    cout << menorAltura << endl;

    if (contMulheres > 0)
        cout << somaMulheres / contMulheres << endl;
    else
        cout << "erro" << endl;

    if (contHomens > 0)
        cout << somaHomens / contHomens << endl;
    else
        cout << "erro" << endl;

    double mediaTotal = (somaMulheres + somaHomens) / n;
    cout << mediaTotal << endl;

    return 0;
}

