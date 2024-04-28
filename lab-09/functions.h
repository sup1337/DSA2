// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <set>
#include <fstream>
#include <algorithm>

using namespace std;

// Függvénydeklarációk
set<string*> generateFlags(string szinek[], int m);
bool isPalindrome(string& szoveg, int start, int end);

#endif // FUNCTIONS_H
