//
// Created by laszl on 2024. 02. 26..
//

#include "functions.h"

#include <iostream>

using namespace std;

// Függvény az adatok beolvasására a tömbbe
void tomb_beolvasasa(int *tomb, int meret) {
    cout << "Kérem adja meg a tömb elemeit:\n";
    for (int i = 0; i < meret; ++i) {
        cin >> tomb[i];
    }
}
void readArrayRec(int *tomb, int hossz, ifstream &f) {
    f >> tomb[hossz];
    if(hossz > 0) readArrayRec(tomb, hossz - 1 , f);
}

void printArrayRec(int *tomb, int hossz) {
    cout << tomb[hossz] << endl;
    if(hossz > 0) printArrayRec(tomb, hossz - 1);
}

// Függvény a tömb kiírására
void tomb_kiirasa(int *tomb, int meret) {
    cout << "A tömb elemei:\n";
    for (int i = 0; i < meret; ++i) {
        cout << tomb[i] << " ";
    }
    cout << endl;
}

// Lineáris keresés a tömbben
int linearis_kereses(int *tomb, int meret, int keresett) {
    for (int i = 0; i < meret; ++i) {
        if (tomb[i] == keresett) {
            return i; // Ha megtaláltuk, visszatérünk az indexszel
        }
    }
    return -1; // Ha nem találtuk meg, -1-et adunk vissza
}

// Bináris keresés a rendezett tömbben
int binaris_kereses(const int *tomb, int meret, int keresett) {
    int bal = 0, jobb = meret - 1;
    while (bal <= jobb) {
        int kozep = (bal + jobb) / 2;
        if (tomb[kozep] == keresett) {
            return kozep; // Ha megtaláltuk, visszatérünk az indexszel
        } else if (tomb[kozep] < keresett) {
            bal = kozep + 1;
        } else {
            jobb = kozep - 1;
        }
    }
    return -1; // Ha nem találtuk meg, -1-et adunk vissza
}

// Legnagyobb közös osztó kiszámítása
int lnko(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// int lnkoRec(int a , int b) {
//     if ()
// }

// Legkisebb közös többszörös kiszámítása
int legkisebb_kozos_tobbszoros(int a, int b) {
    return (a * b) / lnko(a, b);
}

// Hatványozás függvénye
int hatvany(int a, int k) {
    int eredmeny = 1;
    for (int i = 0; i < k; ++i) {
        eredmeny *= a;
    }
    return eredmeny;
}

int hatvanyRec(int a , int k) {
    if(k==0) return 1;
    return hatvanyRec(a,k-1)*a;
}
int inverseNumber(int n){
    int eredmeny=0;
    int temp;
    while(n>9) {
        temp = n % 10;
        n = n / 10;
        eredmeny=eredmeny * 10 + temp;
    }
    return eredmeny * 10 + n;
}

int inverseNumberRec(int n, int fn=0) {
    if (n == 0) {
        return fn;
    }
    if (n > 9) {
        return inverseNumberRec(n / 10, fn * 10 + n % 10);
    }
    return inverseNumberRec(n / 10, fn * 10 + n);
}

