//
// Created by laszl on 2024. 04. 15..
//

#include "functions.h"

int greedy(vector<vector<int>>& a, int i, int j, int s) {
    s += a[i][j];
    if (i < a.size() - 1) {
        if (a[i + 1][j] < a[i + 1][j + 1]) {
            return greedy(a, i + 1, j, s);
        } else {
            return greedy(a, i + 1, j + 1, s);
        }
    }
    return s;
}
int Bt(vector<vector<int>>& a, int i, int j, int s, int& S) {
    s += a[i][j];
    if (i == a.size() - 1) {
        if (s < S) {
            S = s;
        }
    } else {
        Bt(a, i + 1, j, s, S);
        Bt(a, i + 1, j + 1, s, S);
    }
    return 0; // Returning a value to ensure all code paths return a value
}

Food::Food(string n, int c) : name(n), calories(c) {}

vector<pair<string, int>> selectMenu(const vector<Food>& foods, int maxCalories) {
    vector<pair<string, int>> menu;

    vector<Food> sortedFoods = foods;
    sort(sortedFoods.begin(), sortedFoods.end(), [](const Food& a, const Food& b) {
        return a.calories < b.calories;
    });

    // Greedy választás
    for (const Food& food : sortedFoods) {
        if (food.calories <= maxCalories) {
            menu.push_back(make_pair(food.name, food.calories));
            maxCalories -= food.calories;
        } else {
            break;
        }
    }

    return menu;

}