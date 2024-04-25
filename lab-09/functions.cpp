//
// Created by laszl on 2024. 04. 25.
//

#include "functions.h"
set<vector<string>> generateFlags(vector<string> colors) {
    int pirosIndex = -1;
    int m = colors.size();
    set<vector<string>> flags;

    for(int i = 0; i < m; ++i) {
        if(colors[i] == "PIROS") {
            pirosIndex = i;
            break;
        }
    }


    for(int i = 1; i <= m; i += 2) {
        do {
            vector<string> flag;

            for(int j = 0; j < i / 2; ++j) {
                flag.push_back(colors[j]);
            }

            flag.push_back("PIROS");

            for(int j = i / 2 + 1; j < i; ++j) {
                flag.push_back(colors[j - 1]);
            }

            flags.insert(flag);
        } while(next_permutation(colors.begin(), colors.end()));
    }

    return flags;
}
bool isPalindrome(string& text, int start, int end) {

    if (start >= end) {
        return true;
    }

    while (start < end && !isalnum(text[start])) {
        ++start;
    }
    while (start < end && !isalnum(text[end])) {
        --end;
    }
    if (tolower(text[start]) != tolower(text[end])) {
        return false;
    }

    return isPalindrome(text, start + 1, end - 1);
}