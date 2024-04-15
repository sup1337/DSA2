//
// Created by laszl on 2024. 04. 15..
//

#ifndef LAB_07_FUNCTIONS_H
#define LAB_07_FUNCTIONS_H

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function declarations
int G(std::vector<std::vector<int>>& a, int i, int j, int s);
int Bt(std::vector<std::vector<int>>& a, int i, int j, int s, int& S);

// Class declaration
class Food {
public:
    Food(std::string n, int c);
    std::string name;
    int calories;
};

// Function to select menu
std::vector<std::pair<std::string, int>> selectMenu(const std::vector<Food>& foods, int maxCalories);

#endif /* FUNCTIONS_H */


#endif //LAB_07_FUNCTIONS_H
