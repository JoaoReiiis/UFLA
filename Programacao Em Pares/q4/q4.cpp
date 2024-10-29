#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double R;
    int N;
    cin >> R >> N;
   
    double termo = 1;
    for (int i = 0; i < N; i++) {
        cout << termo << endl;
        termo *= R; 
    }

    return 0;
}