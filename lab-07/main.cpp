#include <iostream>

#include "functions.h"
int main() {
    vector<Food> foods = {
            {"spenotos gomba", 200},
            {"zoldseg a lerben", 250},
            {"dioval toltott korte", 300},
            {"vanilias es kokuszos Panna cotta", 400},
            {"fuges salata", 350},
            {"citromtorta", 500}
    };

    int n;
    cout << "Adj meg n erteket: ";
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

//    cout << "Adj meg " << n << "x" << n << " meretu matrixot:" << endl;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cin >> a[i][j];
//        }
//    }
//    int S = INT_MAX;
//    cout << "G(0, 0, 0) erteke: " << G(a, 0, 0, 0) << endl;
//    cout << "Bt(0, 0, 0) erteke: " << Bt(a,0,0,0,S) << endl;
//
//    /*
//     7 0 0 0 0
//     9 5 0 0 0
//     1 99 4 0 0
//     21 7 33 17 0
//     2 15 8 3 1
//       */

    int maxCalories = 2000;

    vector<pair<string, int>> menu = selectMenu(foods, maxCalories);

    cout << "Panna menuje:\n";
    for (const auto& item : menu) {
        cout << "- " << item.first << " (" << item.second << " kcal)" << endl;
    }

    return 0;

}