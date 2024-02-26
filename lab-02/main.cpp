#include <iostream>
#include <cmath>

using namespace std;

void nagyobbHatvanyKiirasa(double szam1, double szam2) {
    double hatvany1 = pow(szam1, szam2);
    double hatvany2 = pow(szam2, szam1);

    double nagyobbHatvany = (hatvany1 > hatvany2) ? hatvany1 : hatvany2;

    cout << "A nagyobb " << nagyobbHatvany << endl;
}

int main() {
    double szam1, szam2;
    cout << "elso szamot: ";
    cin >> szam1;
    cout << "masodik szamot: ";
    cin >> szam2;

    nagyobbHatvanyKiirasa(szam1, szam2);

    return 0;
}