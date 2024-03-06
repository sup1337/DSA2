//
// Created by laszl on 2024. 02. 26..
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <fstream>

void tomb_beolvasasa(int *tomb, int meret);
void tomb_kiirasa(int *tomb, int meret);
int linearis_kereses(int *tomb, int meret, int keresett);
int binaris_kereses(const int *tomb, int meret, int keresett);
int lnko(int a, int b);
int lkkt(int a, int b);
int hatvany(int a, int k);
int hatvanyRec(int a , int k);
int inverseNumber(int n);
int inverseNumberRec(int n,int fn);
void readArrayRec(int *a, int n, std::ifstream &f);
void printArrayRec(int *a, int n);


#endif //FUNCTIONS_H
