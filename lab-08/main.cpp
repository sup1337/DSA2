// main.cpp

#include <iostream>
#include <algorithm> // a sort miatt
#include "header.h" // a header fájl beillesztése

using namespace std;
int main() {
    // Az osszegekKombinacioja függvény tesztelése
    int jeloltek[] = {2, 3, 6, 7};
    int cel = 7;
    int eredmenyMeret;
    int** kombinaciok = osszegekKombinacioja(jeloltek, sizeof(jeloltek) / sizeof(jeloltek[0]), cel, eredmenyMeret);
    cout << "Kombinaciak a celertekkel " << cel << ":" << endl;
    for (int i = 0; i < eredmenyMeret; ++i) {
        cout << "[";
        for (int j = 0; j < 100; ++j) {
            if (kombinaciok[i][j] == 0)
                break;
            cout << kombinaciok[i][j] << " ";
        }
        cout << "]" << endl;
        delete[] kombinaciok[i];
    }
    delete[] kombinaciok;

    // A vizsgakOsszehasonlitasa függvény tesztelése
    Vizsga vizsgak[] = {{"Matematika", 90}, {"Tudomany", 85}, {"Tortenelem", 88}};
    cout << "\nVizsgak rendezes elott:" << endl;
    for (const auto& vizsga : vizsgak) {
        cout << vizsga.nev << ": " << vizsga.pontszam << endl;
    }
    sort(vizsgak, vizsgak + sizeof(vizsgak) / sizeof(vizsgak[0]), vizsgakOsszehasonlitasa);
    cout << "\nVizsgak rendezes utan pontszam szerint:" << endl;
    for (const auto& vizsga : vizsgak) {
        cout << vizsga.nev << ": " << vizsga.pontszam << endl;
    }

    return 0;
}
