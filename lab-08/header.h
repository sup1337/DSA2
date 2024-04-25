//
// Created by laszl on 2024. 04. 25..
//

#ifndef LAB_08_HEADER_H
#define LAB_08_HEADER_H

#include <utility>
#include <vector>
#include <string>

using namespace std;
// Az Exam struktúra definíciója
struct Exam {
    string name; // A vizsga neve
    int score;        // A vizsga pontszáma
    // Konstruktor az Exam inicializálásához
    Exam(string n, int s) : name(std::move(n)), score(s) {}
};

// Függvénydeklarációk
void findCombinations(vector<int>& candidates, int target, vector<int>& combination, vector<vector<int>>& result, int start);
vector<vector<int>> combinationSum(vector<int>& candidates, int target);
bool compareExams(const Exam &a, const Exam &b);


#endif //LAB_08_HEADER_H
