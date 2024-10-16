#include <iostream>
#include <iomanip>

using namespace std;

void ordena(float array[], int pos){
    int trocas = 0;
    for(int i = 0; i < pos - 1; i++){
        if(array[i] > array[i+1]){
            swap(array[i+1], array[i]);
            trocas++;
        };
    }

    if(trocas == 0) return;

    ordena(array, pos);
}

int main()
{
    float numeros[4];

    cin >> numeros[0] >> numeros[1] >> numeros[2] >> numeros[3];

    ordena(numeros,4);

    float soma = numeros[0] + numeros[1] + numeros[2];

    cout << fixed << setprecision(1)<< soma;

    return 0;
}
