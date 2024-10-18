#include <iostream>

using namespace std;

int main(){
    float valor;
    char opcao;
    int parcelas;

    cin >> valor >> opcao;

    if(opcao == 'P') cin >> parcelas;

    if(opcao == 'V'){
        cout << valor*0.9;
    }else if(opcao == 'P' && parcelas == 3){
        cout << valor << endl << valor/3;
    }else if(opcao == 'P' && parcelas == 6){
        cout << valor*1.05 << endl << (valor*1.05)/6;
    }else if(opcao == 'P' && parcelas == 12){
        cout << valor*1.1 << endl << (valor*1.1)/12;
    }

    return 0;
}