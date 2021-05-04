#include "Functions.h"
#include "Registro.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void Bubble(int tipo, int n) {

}

void Selecao(int tipo, int n) {

}

void Insercao(int tipo, int n) {

}

void Shellsort(int tipo, int n) {

}

void Quicksort(int tipo, int n) {

}

void Bogosort(int tipo, int n) {

}

void Gnomesort(int tipo, int n) {

}


void RegistroBubble (Registro* v, int n ){
    int i, j, troca;
    Registro aux;

    for( i = 0 ; i < n-1 ; i++ ) {
         troca = 0;
         for( j = 1 ; j < n-i ; j++ ) {
             if ( v[j].chave < v[j-1].chave ) {
                 aux = v[j];
                 v[j] = v[j-1];
                 v[j-1] = aux;
                 troca = 1;
             }
         }
         if (troca == 0)
         break;
    }
}

 void RegistroSelecao (Registro* v, int n){
     int i, j, Min;
     Registro aux;

     for (i = 0; i < n - 1; i++) {
         Min = i;
         for (j = i + 1 ; j < n; j++) {
             if (v[j].chave < v[Min].chave) {
                 Min = j;
             }
             aux = v[Min];
             v[Min] = v[i];
             v[i] = aux;
         }
     }
}

void RegistroInsercao (Registro* v, int n ){
    int i,j;
    Registro aux;
    for (i = 1; i < n; i++){
        aux = v[i];
        j = i - 1;
        while ( ( j >= 0 ) && ( aux.chave < v[j].chave ) ){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}

void RegistroShellsort (Registro * v, int n){
    int i, j;
    int h = 1;
    Registro aux;

    do h = h * 3 + 1; while (h < n);
    do{
        h = h/3;
        for( i = h ; i < n ; i++ ){
            aux = v[i]; j = i;
            while (v[j - h].chave > aux.chave){
                v[j] = v[j - h]; j -= h;
                if (j < h) break;
            }
            v[j] = aux;
        }
    }while (h != 1);
}

void VetorBubble (int v[], int n ){
    int i, j, troca;
    int aux;

    for( i = 0 ; i < n-1 ; i++ ) {
        troca = 0;
        for( j = 1 ; j < n-i ; j++ ) {
            if ( v[j] < v[j-1] ) {
                aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
                troca = 1;
            }
        }
        if (troca == 0) {
            break;
        }
    }
}

void VetorSelecao (int v[], int n){
    int i, j, Min;
    int aux;

    for (i = 0; i < n - 1; i++) {
        Min = i;
        for (j = i + 1 ; j < n; j++) {
            if (v[j] < v[Min]) {
                Min = j;
            }
            aux = v[Min];
            v[Min] = v[i];
            v[i] = aux;
        }
    }
}

void VetorInsercao (int v[], int n ){
    int i,j;
    int aux;
    for (i = 1; i < n; i++){
        aux = v[i];
        j = i - 1;
        while ( ( j >= 0 ) && ( aux < v[j] ) ){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}

void VetorShellsort (int v[], int n){
    int i, j;
    int h = 1;
    int aux;

    do h = h * 3 + 1; while (h < n);
    do{
        h = h/3;
        for( i = h ; i < n ; i++ ){
            aux = v[i]; j = i;
            while (v[j - h] > aux){
                v[j] = v[j - h]; j -= h;
                if (j < h) break;
            }
            v[j] = aux;
        }
    }while (h != 1);
}

bool IsVetorSorted(int v[], int n)
{
    while ( --n >= 1 ) {
        if ( v[n] < v[n-1] ) return false;
    }
    return true;
}

bool IsRegistroSorted(Registro *v, int n)
{
    while ( --n >= 1 ) {
        if ( v[n].chave < v[n-1].chave ) return false;
    }
    return true;
}

void ShuffleRegistro(Registro *v, int n)
{
    srand(time(NULL));
    int i, r;
    Registro t;
    for(i=0; i < n; i++) {
        t = v[i];
        r = rand() % n;
        v[i] = v[r];
        v[r] = t;
    }
}

void ShuffleVetor(int v[], int n)
{
    srand(time(NULL));
    int i, t, r;
    for(i=0; i < n; i++) {
        t = v[i];
        r = rand() % n;
        v[i] = v[r];
        v[r] = t;
    }
}

void VetorBogosort(int v[], int n)
{
    while ( !IsVetorSorted(v, n) ) Shuffle(v, n);
}

void RegistroBogosort(Registro *v, int n)
{
    while ( !IsRegistroSorted(v, n) ) Shuffle(v, n);
}

void VetorGnomesort(int v[], int n)
{
    int i = 0;
    int aux;

    while (i < n) {
        if (i == 0)
            i++;
        if (v[i] >= v[i - 1])
            i++;
        else {
            aux = v[i];
            v[i] = v[i-1];
            v[i-1] = aux;
            i--;
        }
    }
}

void RegistroGnomesort(Registro *v, int n)
{
    int i = 0;
    Registro aux;

    while (i < n) {
        if (i == 0)
            i++;
        if (v[i].chave >= v[i - 1].chave)
            i++;
        else {
            aux = v[i];
            v[i] = v[i-1];
            v[i-1] = aux;
            i--;
        }
    }
}