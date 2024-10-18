#include <iostream> 

using namespace std;

int main () {
    int idade;
    cin >> idade;
    idade >= 18 ? cout << "MAIOR DE IDADE" : cout << "MENOR DE IDADE";
    return 0;
}