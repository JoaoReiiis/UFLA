#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    double dinheiro;
    cin >> dinheiro;

    double gasto = 0.0;
    int caixasChocolate = dinheiro / 13.50;
    gasto += caixasChocolate * 13.50;
    dinheiro -= caixasChocolate * 13.50;

    int trufas = dinheiro / 2.50;
    gasto += trufas * 2.50;
    dinheiro -= trufas * 2.50;

    int pacotinhosJujuba = dinheiro / 1.50;
    gasto += pacotinhosJujuba * 1.50;
    dinheiro -= pacotinhosJujuba * 1.50;

    int drops = dinheiro / 1.00;
    gasto += drops * 1.00;
    dinheiro -= drops * 1.00;

    int balasMorango = dinheiro / 0.25;
    gasto += balasMorango * 0.25;
    dinheiro -= balasMorango * 0.25;

    ofstream saida("doces.txt");
    saida << fixed << setprecision(2);
    saida << gasto << endl
          << caixasChocolate << endl
          << trufas << endl
          << pacotinhosJujuba << endl
          << drops << endl
          << balasMorango << endl;

    saida.close();

    return 0;
}
