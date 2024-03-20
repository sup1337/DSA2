#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    const int MAX_N = 5; // Maximalis tombmeret
    int x[MAX_N]; // Tomb inicializalasa

    // Tomb elemeinek nullaval valo inicializalasa
    for (int & index : x) {
        index = 0;
    }

    int n = MAX_N; // A tomb merete
    int k = 3; // A kombinaciok merete

    int choice;
    bool exitProgram = false;

    while (!exitProgram) {
        cout << "Valassz egy fuggvenyt a kovetkezok kozul:" << endl;
        cout << "1. Bt" << endl;
        cout << "2. kerekpar" << endl;
        cout << "3. Descartes" << endl;
        cout << "4. Permutacio" << endl;
        cout << "5. BackTrackingKombinacio" << endl;
        cout << "6. BackTrackingVariacio" << endl;
        cout << "7. Kilepes" << endl;
        cout << "Valasztas: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Bt fuggveny hivasa:" << endl;
            Bt(x, n, k);
            break;
            case 2:
                cout << "Kerekpar fuggveny hivasa:" << endl;
            kerekpar(x, n, k);
            break;
            case 3:
                cout << "Descartes fuggveny hivasa:" << endl;
            descartes(x, n, k);
            break;
            case 4:
                cout << "Permutacio fuggveny hivasa:" << endl;
            permutacio(x, n, k);
            break;
            case 5:
                cout << "BackTrackingKombinacio fuggveny hivasa:" << endl;
            BackTrackingKombinacio(x, n, k, 1);
            break;
            case 6:
                cout << "BackTrackingVariacio fuggveny hivasa:" << endl;
            BackTrackingVariacio(x, n, k, 1);
            break;
            case 7:
                exitProgram = true;
            break;
            default:
                cout << "Ervenytelen valasztas!" << endl;
        }
    }
    return 0;
}
