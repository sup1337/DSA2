// main.c

#include <iostream>
#include <algorithm> // a sort miatt
#include "header.h" // a header fájl beillesztése

using namespace std;

int main() {
    // A combinationSum függvény tesztelése
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> combinations = combinationSum(candidates, target);
    cout << "Kombinaciok a celertekkel " << target << ":" << endl;
    for (const auto& combination : combinations) {
        cout << "[";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    // Az összehasonlítások függvény tesztelése
    vector<Exam> exams = {{"Matematika", 90}, {"Tudomany", 85}, {"Tartenelem", 88}};
    cout << "\nVizsgak rendezes elott:" << endl;
    for (const auto& exam : exams) {
        cout << exam.name << ": " << exam.score << endl;
    }
    sort(exams.begin(), exams.end(), compareExams);
    cout << "\nVizsgak rendezes utan pontszam szerint:" << endl;
    for (const auto& exam : exams) {
        cout << exam.name << ": " << exam.score << endl;
    }

    return 0;
}
