#include <iostream>

using namespace std;

int main() {
    int genero;           
    int idade;            
    float tempo_trabalhado;

    cin >> genero >> idade >> tempo_trabalhado;

    float tempo_restante; 
    float idade_aposentadoria; 

    if (genero == 1) {
        if (tempo_trabalhado > 20) { 
            tempo_restante = 35 - tempo_trabalhado;
            tempo_restante += tempo_restante * 0.3;
            idade_aposentadoria = idade + tempo_restante;
        } else {            
            idade_aposentadoria = 65;
        }
    } else { 
        if (tempo_trabalhado > 15) { 
            tempo_restante = 30 - tempo_trabalhado;
            
            tempo_restante += tempo_restante * 0.3;
            idade_aposentadoria = idade + tempo_restante;
        } else {
            
            idade_aposentadoria = 62;
        }
    }

    cout << idade_aposentadoria << endl;

    return 0;
}