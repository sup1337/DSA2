//
// Created by laszl on 2024. 04. 25..
//

#ifndef LAB_08_HEADER_H
#define LAB_08_HEADER_H

#include <vector>
#include <string>

// Az Exam struktúra definíciója
struct Exam {
    std::string name; // A vizsga neve
    int score;        // A vizsga pontszáma
    // Konstruktor az Exam inicializálásához
    Exam(std::string n, int s) : name(n), score(s) {}
};

// Függvénydeklarációk
void findCombinations(std::vector<int>& candidates, int target, std::vector<int>& combination, std::vector<std::vector<int>>& result, int start);
std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target);
bool compareExams(const Exam &a, const Exam &b);


#endif //LAB_08_HEADER_H
