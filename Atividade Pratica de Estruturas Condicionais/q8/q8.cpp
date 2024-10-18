#include <iostream>

using namespace std;

int main()
{
    float horas_extras;
    float horas_faltas;
    float h;
    float premio;

    cin >> horas_extras;
    cin >> horas_faltas;

    h = (horas_extras - (2.0/3.0 * (horas_faltas))) * 60;
    
    if (h > 2400)
    {
        premio = 500;
    }
    else if (h <= 2400 && h > 1800)
    {
        premio = 400;
    }
    else if (h <= 1800 && h > 1200)
    {
        premio = 300;
    }
    else if (h <= 1200 && h > 600)
    {
        premio = 200;
    }
    else if (h <= 600)
    {
        premio = 100;
    }

    cout << premio;
}