#include <iostream>

using namespace std;

int main() {
    
    int limite_carga, qtd_cavalos, qtd_vacas, qtd_galinhas;
    const int peso_cavalo = 250, peso_vaca = 150, peso_galinha = 2;
   
    cin >> limite_carga >> qtd_cavalos >> qtd_vacas >> qtd_galinhas;
    
    int sobra_cavalos = qtd_cavalos, sobra_vacas = qtd_vacas, sobra_galinhas = qtd_galinhas;

    int galinhas_colocadas = min(limite_carga / peso_galinha, qtd_galinhas);
    sobra_galinhas -= galinhas_colocadas;
    limite_carga -= galinhas_colocadas * peso_galinha;
    
    int vacas_colocadas = min(limite_carga / peso_vaca, qtd_vacas);
    sobra_vacas -= vacas_colocadas;
    limite_carga -= vacas_colocadas * peso_vaca;
    
    int cavalos_colocados = min(limite_carga / peso_cavalo, qtd_cavalos);
    sobra_cavalos -= cavalos_colocados;

    cout << sobra_cavalos << endl;
    cout << sobra_vacas << endl;
    cout << sobra_galinhas << endl;

    return 0;
}