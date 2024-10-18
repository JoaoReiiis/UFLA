#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    double velocidade_trem1, velocidade_trem2, distancia;

    cin >> velocidade_trem1 >> velocidade_trem2 >> distancia;

    double velocidade_total = velocidade_trem1 + velocidade_trem2;


    double tempo_para_colisao = distancia / velocidade_total;


    if (tempo_para_colisao <= 10) {
        cout << "COLISAO" << endl;
    } else {
        cout << fixed << setprecision(2) << tempo_para_colisao << endl;
    }

    return 0;
}