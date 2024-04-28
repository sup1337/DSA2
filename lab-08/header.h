//
// Created by laszl on 2024. 04. 25..
//


#ifndef LAB_08_HEADER_H
#define LAB_08_HEADER_H

#include <utility>
#include <string>

// Az Vizsga struktúra definíciója
struct Vizsga {
    std::string nev; // A vizsga neve
    int pontszam;        // A vizsga pontszáma
    // Konstruktor az Vizsga inicializálásához
    Vizsga(std::string n, int s) : nev(std::move(n)), pontszam(s) {}
};

// Függvénydeklarációk
void kombinaciokKeresese(int jeloltek[], int meret, int cel, int kombinacio[], int kombinacioMeret, int start, int eredmeny[], int& eredmenyIndex);
int** osszegekKombinacioja(int jeloltek[], int meret, int cel, int& eredmenyMeret);
bool vizsgakOsszehasonlitasa(const Vizsga &a, const Vizsga &b);

#endif //LAB_08_HEADER_H
