#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N < 2) return 0;

    int soma = 0;
    bool primeiro = true;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            if (!primeiro) {
                cout << "+";
            }
            cout << i;
            soma += i;
            primeiro = false;
        }
    }

    cout << "=" << soma << endl;

    return 0;
}
