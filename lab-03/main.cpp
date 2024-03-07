#include <iostream>
#include <fstream>
#include "functions.h"

using namespace std;


int main() {
    const int MAX_MERET = 100;
    int adatok[MAX_MERET];
    int meret;

    ifstream fajl("adatok.txt");
    if (!fajl.is_open()) {
        cerr << "Hiba: A fajl nem nyithato meg!\n";
        return 1;
    }

    fajl >> meret;
    if (meret <= 0 || meret > MAX_MERET) {
        cerr << "Hiba: Ervenytelen meret!\n";
        return 1;
    }

    readArray(adatok, meret - 1, fajl);
    fajl.close();

    cout << "Beolvasott adatok:\n";
    tukorSzamok(adatok, meret - 1);

    return 0;
}
