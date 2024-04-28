//
// Created by laszl on 2024. 04. 25..
//

#include "header.h"

void kombinaciokKeresese(int jeloltek[], int meret, int cel, int kombinacio[], int kombinacioMeret, int start, int eredmeny[], int& eredmenyIndex) {
    if (cel == 0) {
        for (int i = 0; i < kombinacioMeret; ++i) {
            eredmeny[eredmenyIndex++] = kombinacio[i];
        }
        return;
    }
    for (int i = start; i < meret; ++i) {
        if (jeloltek[i] > cel)
            continue;
        kombinacio[kombinacioMeret++] = jeloltek[i];
        kombinaciokKeresese(jeloltek, meret, cel - jeloltek[i], kombinacio, kombinacioMeret, i, eredmeny, eredmenyIndex);
        kombinacioMeret--;
    }
}

int** osszegekKombinacioja(int jeloltek[], int meret, int cel, int& eredmenyMeret) {
    int** eredmeny = new int*[10000]; // Maximum 10000 kombináció
    int kombinacio[100]; // Maximum 100 elemű kombináció
    int eredmenyIndex = 0;
    kombinaciokKeresese(jeloltek, meret, cel, kombinacio, 0, 0, *eredmeny, eredmenyIndex);
    eredmenyMeret = eredmenyIndex;
    return eredmeny;
}

bool vizsgakOsszehasonlitasa(const Vizsga &a, const Vizsga &b) {
    return a.pontszam > b.pontszam;
}
