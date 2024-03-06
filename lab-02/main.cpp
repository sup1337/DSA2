#include <iostream>
#include <cmath>

#include "functions.h"

using namespace std;

void nagyobbHatvanyKiirasa(double szam1, double szam2) {
    double hatvany1 = pow(szam1, szam2);
    double hatvany2 = pow(szam2, szam1);

    double nagyobbHatvany = (hatvany1 > hatvany2) ? hatvany1 : hatvany2;

    cout << "A nagyobb " << nagyobbHatvany << endl;
}

int main() {
    // double szam1, szam2;
    // cout << "elso szamot: ";
    // cin >> szam1;
    // cout << "masodik szamot: ";
    // cin >> szam2;
    //
    // nagyobbHatvanyKiirasa(szam1, szam2);

    cout << "Eredmeny: " << hatvanyRec(2, 3) << endl;

    cout<< "inverse number: " << inverseNumber(56789);
    cout << endl;
    cout<< "inverse number: " << inverseNumberRec(56789,0);
    int n = 5;
    int a [5];
    ifstream f("be.txt");
    readArrayRec(a,n,f);
    printArrayRec(a, n);

    return 0;
}