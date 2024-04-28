//
// Created by laszl on 2024. 03. 20..
//

#include "functions.h"

#include <iostream>

using namespace std;
//x: Egy tömb, amelyben a kombinációkat tároljuk.
//n: A kombináció hossza.
//k: Az aktuális pozíció a kombinációban.

void Bt(int *x, int n, int k) {
    for(x[k] = 0; x[k] <= 9; x[k]++){
        if(k < n - 1){
            Bt(x, n, k+1);
        }else{
            kiir(x, n);
        }
    }
}

void kiir(int *array, int n){
    for (int i = 1; i <= n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
// a függvény ellenőrzi, hogy az aktuális szám hozzáadása egy permutációhoz ígéretes-e,
// azaz még nem szerepelt-e az előző elemek között.

bool igeretes(int *x, int k) {
    for (int i = 1; i < k-1 ; ++i) {
        if(x[i] == x[k]){
            return false;
        }
    }
    return true;
}
// függvény generálja az összes lehetséges kerekpár kombinációt egy adott számrendszerben.
// A paraméterek hasonlóak a Bt függvényhez.

void kerekpar(int *x, int n, int k) {
    for (x[k] = 0; x[k] <= 9; x[k]++) {
        if( k < n){
            kerekpar(x,n,k+1);
        }
        else{
            kiir(x,n);
        }
    }
}
//Ez a függvény az összes lehetséges Descartes-szorzatot generálja egy adott számrendszerben.
// A paraméterek hasonlóak a Bt függvényhez.
void descartes(int *x, int n, int k) {
    for(x[k] = 1; x[k] <= n; x[k]++){
        if(k < n){
            descartes(x,n,k+1);
        }
        else{
            kiir(x,n);
        }
    }
}

//Ez a függvény ellenőrzi, hogy egy adott kombináció ígéretes-e, azaz a számsorrend növekvő-e.
void permutacio(int *x, int n, int k) {
    for(x[k] = 1; x[k] <= n; x[k]++){
        if(igeretes(x,k)){
            if(k < n){
                permutacio(x,n,k+1);
            }
            else{
                kiir(x,n);
            }
        }
    }
}

//Ez a függvény ellenőrzi, hogy egy adott kombináció ígéretes-e, azaz a számsorrend növekvő-e.
bool ellenorizKombinacio(int * array, int index)
{
    for (int i = 1; i <= index - 1; i++)
        if(array[i] >= array[index])
            return false;
    return true;
}

// Ez a függvény generálja az összes lehetséges kombinációt egy adott számrendszerben visszalépéses módszerrel
void BackTrackingKombinacio(int * array, int n, int k, int index)
{
    if (index == k + 1)
        kiir(array, k);
    else
        for (int i=1;i<=n;i++)
        {
            array[index]=i;
            if (ellenorizKombinacio(array, index))
                BackTrackingKombinacio(array, n, k, index + 1);
        }
}

// Ez a függvény ellenőrzi, hogy egy adott variáció érvényes-e, azaz nem tartalmaz-e ismétlődő elemeket.
bool ellenorizVariacio(int * array, int index)
{
    for (int i = 1; i <= index - 1; i++)
        if(array[i] == array[index])
            return false;
    return true;
}
// Ez a függvény generálja az összes lehetséges variációt egy adott számrendszerben visszalépéses módszerrel.
void BackTrackingVariacio(int * array, int n, int k, int index)
{
    if (index == k + 1)
        kiir(array, k);
    else
        for (int i=1;i<=n;i++)
        {
            array[index]=i;
            if (ellenorizVariacio(array, index))
                BackTrackingVariacio(array, n, k, index + 1);
        }
}