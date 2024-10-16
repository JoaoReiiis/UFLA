#include <iostream>

using namespace std;

int main (){
    int x,y;

    cin >> x >> y;

    if(y == 0){
        cout << "erro";
    }else{
        cout << x/y << endl;
        cout << x%y << endl;
    }

    return 0;
}