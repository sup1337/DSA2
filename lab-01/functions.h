//
// Created by laszl on 2024. 02. 26..
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <fstream>
using namespace std;
void read_array(int *a, int n);//void read(int *&array, int &n, ifstream &f);
void print_array(int *a, int n);
int linearSearch(int *array, int size, int target);
int binarySearch(const int *array, int size, int target);
int lnko(int a, int b);
int lkkt(int a, int b);
int power(int b, int e);
void selection_sort(int *a, int n);
void minimselection_sort(int *a, int n);
void bubble_sort(int *a, int n);
int lnkoRec(int a, int b);
int lkktRec(int a, int b, int a1, int b1);
int powerRec(int b, int e);
void readArrayRec(int *a, int n, ifstream &f);
void printArrayRec(int *a, int n);
void printArrayRec(int *a, int n);
int sumArrayRec(int *a, int n);
int maxArrayRec(int *a, int n, int max);
int lnkoArrayRec(int *a, int n);
void digitNumbers(int n);
int inverseNumber(int n,int fn);
#endif //FUNCTIONS_H
