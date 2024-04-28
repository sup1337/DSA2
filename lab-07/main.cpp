#include <iostream>
#include <algorithm> // A standard algoritmusokat tartalmazza

using namespace std;

const int SOROK = 5; // A mátrix sorainak száma
const int Oszlopok = 5; // A mátrix oszlopainak száma

// Greedy algoritmus, ami a mátrixon haladva a legnagyobb összeget választja
int greedy(int matrix[SOROK][Oszlopok], int sor, int oszlop, int osszeg) {
    osszeg += matrix[sor][oszlop];
    if (sor < SOROK - 1) {
        if (matrix[sor + 1][oszlop] < matrix[sor + 1][oszlop + 1]) {
            return greedy(matrix, sor + 1, oszlop, osszeg);
        } else {
            return greedy(matrix, sor + 1, oszlop + 1, osszeg);
        }
    }
    return osszeg;
}

// Backtracking algoritmus, ami rekurzívan végigmegy a mátrix összes útján
int backtracking(int matrix[SOROK][Oszlopok], int sor, int oszlop, int osszeg, int& minOsszeg) {
    osszeg += matrix[sor][oszlop];
    if (sor == SOROK - 1) {
        if (osszeg < minOsszeg) {
            minOsszeg = osszeg;
        }
    } else {
        backtracking(matrix, sor + 1, oszlop, osszeg, minOsszeg);
        backtracking(matrix, sor + 1, oszlop + 1, osszeg, minOsszeg);
    }
    return 0; // Visszatérési érték biztosítása az összes kódpályán
}

// Az étel osztály, amely tárolja az étel nevét és kalóriaértékét
class Food {
public:
    string name;
    int calories;

    Food(string foodName, int foodCalories) : name(foodName), calories(foodCalories) {}
};

// Az ételek rendezéséhez használt összehasonlító függvény
bool compareFoods(const Food& food1, const Food& food2) {
    return food1.calories < food2.calories;
}

int main() {
    // Ételek tömbje
    Food foods[] = {
            {"spenotos gomba", 200},
            {"zoldseg a lerben", 250},
            {"dioval toltott korte", 300},
            {"vanilias es kokuszos Panna cotta", 400},
            {"fuges salata", 350},
            {"citromtorta", 500}
    };

    // Ételek rendezése kalóriaérték szerint
    sort(foods, foods + sizeof(foods) / sizeof(foods[0]), compareFoods);

    // Háromszögmátrix inicializálása
    int triangle[SOROK][Oszlopok] = {
            {7, 0, 0, 0, 0},
            {9, 5, 0, 0, 0},
            {1, 99, 4, 0, 0},
            {21, 7, 33, 17, 0},
            {2, 15, 8, 3, 1}
    };

    // Legkisebb összeg inicializálása
    int minOsszeg = INT_MAX;

    // Greedy és Backtracking algoritmusok meghívása
    cout << "Greedy(0, 0, 0) erteke: " << greedy(triangle, 0, 0, 0) << endl;
    cout << "Backtracking(0, 0, 0) erteke: " << backtracking(triangle,0,0,0,minOsszeg) << endl;

    // Maximális kalóriaérték
    int maxCalories = 1000;
    int currentCalories = 0;

    // Menü kiválasztása
    cout << "Panna menuje:\n";
    for (int i = 0; i < sizeof(foods) / sizeof(foods[0]); ++i) {
        if (currentCalories + foods[i].calories <= maxCalories) {
            cout << "- " << foods[i].name << " (" << foods[i].calories << " kcal)" << endl;
            currentCalories += foods[i].calories;
        } else {
            break;
        }
    }

    return 0;
}
