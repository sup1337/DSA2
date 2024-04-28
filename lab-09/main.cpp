#include "functions.h"

int main()
{
    // Fájl megnyitása
    ifstream bemenet("bemenet.txt");
    if(!bemenet.is_open()){
        cout << "A fajl nem nyilt meg.";
        exit(EXIT_FAILURE);
    }
    int n;
    // Színek számának beolvasása
    bemenet >> n;
    // Színek tömb létrehozása
    string szinek[n];
    // Színek beolvasása
    for (int i = 0; i < n; ++i) {
        bemenet >> szinek[i];
    }
    // Fájl bezárása
    bemenet.close();

    // Zászlók halmazának generálása
    set <string*> zaszlok = generateFlags(szinek, n);
    // Összes zászló számának kiírása
    cout << "Az osszes zaszlo szama: " << zaszlok.size() << endl;
    cout << "Az osszes zaszlo:" << endl;
    // Zászlók kiírása
    for(auto zaszlo: zaszlok){
        if (zaszlo[(n - 1) / 2] == "PIROS" && zaszlo[0] != "PIROS") {
            for (int i = 0; i < n; ++i) {
                cout << zaszlo[i] << " ";
            }
            cout << endl;
        }
    }

    // Szöveg beolvasása
    string szoveg;
    cout << "irj be egy szoveget: ";
    cin >> szoveg;

    // Palindrom ellenőrzése
    if (isPalindrome(szoveg, 0, szoveg.length()-1 )) {
        cout << "A szoveg palindrom" << endl;
    } else {
        cout << "A szoveg nem palindrom." << endl;
    }

    return 0;
}
