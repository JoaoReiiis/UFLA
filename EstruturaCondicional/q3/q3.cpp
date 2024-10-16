#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    float x,y;
    unsigned h;

    cin >> h >> x >> y;

    int resto = h%360;

    cout << fixed << setprecision(1);

    if(resto < 90){
        cout << x+y;
    }else if(resto > 90 && resto < 180){
        cout << x*y;
    }else if(resto > 180 && resto < 270){
        cout << x/y;
    }else if(resto > 270){
        cout << pow(x, y);
    }

    return 0;
}