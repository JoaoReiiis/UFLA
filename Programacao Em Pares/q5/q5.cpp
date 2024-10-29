#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int voto;
    int candidatos[4] = {0, 0, 0, 0};
    int nulos = 0, brancos = 0, total_votos = 0;

    while (true) {
        cin >> voto;
        if (voto == 0) break;
        if (voto >= 1 && voto <= 4) {
            candidatos[voto - 1]++;
        } else if (voto == 5) {
            nulos++;
        } else if (voto == 6) {
            brancos++;
        }
        total_votos++;
    }

    for (int i = 0; i < 4; i++) {
        double percentual = (static_cast<double>(candidatos[i]) / total_votos);
        cout << fixed << setprecision(11) << i + 1 << ": " << candidatos[i] << " " << percentual << endl;
    }

    double percentual_nulos = (static_cast<double>(nulos) / total_votos);
    double percentual_brancos = (static_cast<double>(brancos) / total_votos);
    int votos_validos = total_votos - nulos - brancos;
    double percentual_validos = (static_cast<double>(votos_validos) / total_votos);

    cout << "5: " << nulos << " " << fixed << setprecision(11) << percentual_nulos << std::endl;
    cout << "6: " << brancos << " " << fixed << setprecision(11) << percentual_brancos << std::endl;
    cout << "7: " << votos_validos << " " << fixed << setprecision(10) << percentual_validos << std::endl;

    return 0;
}