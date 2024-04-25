//
// Created by laszl on 2024. 04. 25..
//
#include "header.h"
#include <vector>

using namespace std;

void findCombinations(vector<int>& candidates, int target, vector<int>& combination, vector<vector<int>>& result, int start) {
    if (target == 0) {
        result.push_back(combination);
        return;
    }
    for (int i = start; i < candidates.size(); ++i) {
        if (candidates[i] > target)
            continue;
        combination.push_back(candidates[i]);
        findCombinations(candidates, target - candidates[i], combination, result, i);
        combination.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> combination;
    findCombinations(candidates, target, combination, result, 0);
    return result;
}

bool compareExams(const Exam &a, const Exam &b)  {
    return a.score > b.score;}