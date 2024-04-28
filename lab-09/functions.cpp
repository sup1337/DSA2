// functions.cpp
#include "functions.h"

// Zászlók halmazának generálása
set<string*> generateFlags(string szinek[], int m) {
    int pirosIndex = -1;
    set<string*> zaszlok;

    // PIROS indexének keresése
    for(int i = 0; i < m; ++i) {
        if(szinek[i] == "PIROS") {
            pirosIndex = i;
            break;
        }
    }

    // Zászlók generálása
    for(int i = 1; i <= m; i += 2) {
        do {
            // Új zászló tömb létrehozása
            string* zaszlo = new string[m];

            // Színek másolása az új zászlóba
            for(int j = 0; j < i / 2; ++j) {
                zaszlo[j] = szinek[j];
            }

            // PIROS hozzáadása
            zaszlo[i / 2] = "PIROS";

            // Színek másolása az új zászlóba
            for(int j = i / 2 + 1; j < i; ++j) {
                zaszlo[j] = szinek[j - 1];
            }

            // Új zászló hozzáadása a halmazhoz
            zaszlok.insert(zaszlo);
        } while(next_permutation(szinek, szinek + m));
    }

    return zaszlok;
}

// Palindrom ellenőrzése
bool isPalindrome(string& szoveg, int start, int end) {
    if (start >= end) {
        return true;
    }

    // Szöveg elejéről és végéről az első és utolsó nem-alphanumeric karakterek kihagyása
    while (start < end && !isalnum(szoveg[start])) {
        ++start;
    }
    while (start < end && !isalnum(szoveg[end])) {
        --end;
    }
    // Karakterek összehasonlítása
    if (tolower(szoveg[start]) != tolower(szoveg[end])) {
        return false;
    }

    return isPalindrome(szoveg, start + 1, end - 1);
}
