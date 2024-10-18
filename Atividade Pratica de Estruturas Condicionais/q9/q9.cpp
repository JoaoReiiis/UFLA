#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char souc;  
    char gour;  
    float angulo;

    
    cin >> souc >> gour >> angulo;

    if (gour == 'g') {
        angulo *= M_PI / 180.0;
    }

    if (souc == 's') {
        cout << sin(angulo) << endl;
    } else if (souc == 'c') {
        cout << cos(angulo) << endl;
    } 
    
    return 0;
}