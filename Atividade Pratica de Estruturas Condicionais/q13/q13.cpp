#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{

    float preco_picanha = 28.90;
    float preco_alcatra = 19.90;
    float preco_linguica = 7.95;
    float preco_espetinho_veg = 2.99;
    float preco_sal = 1.50;
    float preco_farinha = 1.85;
    float preco_carvao = 8.70;

    int qtd_picanha, qtd_alcatra, qtd_linguica, qtd_espetinho_veg, qtd_sal, qtd_farinha, qtd_carvao;

    cin >> qtd_picanha >> qtd_alcatra >> qtd_linguica >> qtd_espetinho_veg >> qtd_sal >> qtd_farinha >> qtd_carvao;

    float total = (qtd_picanha * preco_picanha) + (qtd_alcatra * preco_alcatra) +
                  (qtd_linguica * preco_linguica) + (qtd_espetinho_veg * preco_espetinho_veg) +
                  (qtd_sal * preco_sal) + (qtd_farinha * preco_farinha) +
                  (qtd_carvao * preco_carvao);

    float desconto = 0.0;

    if (total <= 200.00)
    {
        desconto = total * 0.05;
    }
    else
    {
        desconto = total * 0.10;
    }

    float valor_final = total - desconto;

    cout << fixed << setprecision(2) << total << endl << desconto << endl << valor_final << endl;
    return 0;
}