#include <iostream>

using namespace std;

int main() {
    char monstro;
    int num_monstros;  
    int tempo;
    
    cin >> monstro >> num_monstros >> tempo;

    int andar = 0;
    int corredor = 0;
    int quarto = 0;

    if (monstro == 'z' || monstro == 'm') {
        andar = 1; 
    } else if (monstro == 'l' || monstro == 'd') {
        andar = 2;  
    } else if (monstro == 'h' || monstro == 's') {
        andar = 3;  
    } else if (monstro == 'v' || monstro == 'f') {
        andar = 4; 
    } 
   
    if (num_monstros == 1) {
        corredor = 1;  
    } else if (num_monstros == 2) {
        corredor = 2;  
    } else if (num_monstros >= 3) {
        corredor = 3; 
    } 

    if (tempo == 1 || tempo == 2) {
        quarto = 1;  
    } else if (tempo == 3 || tempo == 4) {
        quarto = 2; 
    } else if (tempo == 5 || tempo == 6) {
        quarto = 3; 
    } else if (tempo >= 7) {
        quarto = 4; 
    }


    int numero_quarto = andar * 100 + corredor * 10 + quarto;
    cout << numero_quarto;

    return 0;
}