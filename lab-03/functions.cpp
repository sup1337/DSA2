//
// Created by laszl on 2024. 03. 07..
//

#include "functions.h"

#include <iostream>
using namespace std;

void printArrayRec(int *a, int n) {
    cout << a[n] << endl;
    if(n > 0)
        printArrayRec(a, n - 1);
}

void readArray(int *a, int n, ifstream &f) {
    for (int i = n; i >= 0; --i) {
        f >> a[i];
    }
}
void tukorSzamok(int *tomb, int meret) {
    for (int i = 0; i < meret - 1; ++i) {
        int szam1 = tomb[i];
        int szam2 = tomb[i + 1];

        // Ellenorzes, hogy mindket szam ketjegyu-e és hogy tukörkepeinek elojelben egyezzenek
        if (szam1 >= 10 && szam1 <= 99 &&
            szam2 >= 10 && szam2 <= 99 &&
            abs(szam1 % 10) == abs(szam2 / 10) &&
            abs(szam1 / 10) == abs(szam2 % 10)) {

            cout << szam1 << " " << szam2 << endl;
        }
    }
}
