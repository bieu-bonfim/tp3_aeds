#include "Functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

double comp = 0;
double mov = 0;
double time_taken = 0.0;

void PrintVetor(int v[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", v[i]);
    }
}

void Testar(int tipo, int n, int alg, int testes) {
    srand(time(NULL));
    float somaComp = 0;
    float somaMov = 0;
    double somaTempo = 0;
    FILE * file;
    char fileName[50];
    sprintf(fileName, "data/tam%d/", n);
    if(tipo == 1) {
        int *vetor = (int*) malloc(sizeof (int) * n);
        int *vetorAux = (int*) malloc(sizeof (int) * n);

        for (int i = 0; i < n; ++i) {
            int numero = rand() % n;
            vetor[i] = numero;
            vetorAux[i] = numero;
        }

        if (alg == 1) {
            if (testes == 1) {
                VetorBubble(vetor, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < n; ++j) {
                        vetor[j] = vetorAux[j];
                    }
                    VetorBubble(vetor, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }

                strcat(fileName, "vetorBubbleTest.txt");
            }
        } else if (alg == 2) {
            if (testes == 1) {
                VetorSelecao(vetor, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < n; ++j) {
                        vetor[j] = vetorAux[j];
                    }
                    VetorSelecao(vetor, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "vetorSelecaoTest.txt");
            }
        } else if (alg == 3) {
            if (testes == 1) {
                VetorInsercao(vetor, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < n; ++j) {
                        vetor[j] = vetorAux[j];
                    }
                    VetorInsercao(vetor, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "vetorInsercaoTest.txt");
            }
        } else if (alg == 4) {
            if (testes == 1) {
                VetorShellsort(vetor, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < n; ++j) {
                        vetor[j] = vetorAux[j];
                    }
                    VetorShellsort(vetor, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "vetorShellTest.txt");
            }
        } else if (alg == 5) {
            if (testes == 1) {
                VetorQuicksort(vetor, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < n; ++j) {
                        vetor[j] = vetorAux[j];
                    }
                    VetorQuicksort(vetor, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "vetorQuickTest.txt");
            }
        } else if (alg == 6) {
            if (testes == 1) {
                VetorBogosort(vetor, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < n; ++j) {
                        vetor[j] = vetorAux[j];
                    }
                    VetorBogosort(vetor, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "vetorBogoTest.txt");
            }
        } else if (alg == 7) {
            if (testes == 1) {
                VetorGnomesort(vetor, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < n; ++j) {
                        vetor[j] = vetorAux[j];
                    }
                    VetorGnomesort(vetor, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "vetorGnomeTest.txt");
            }
        }
    } else if (tipo == 2) {
        Registro *registros = (Registro*) malloc(sizeof(Registro)*n);
        Registro *registrosAux = (Registro*) malloc(sizeof(Registro)*n);
        InicializarRegistros(registros, n);

        registrosAux = registros;

        if (alg == 1) {
            if (testes == 1) {
                RegistroBubble(registros, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    registros = registrosAux;
                    RegistroBubble(registros, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }

                strcat(fileName, "registrosBubbleTest.txt");
            }
        } else if (alg == 2) {
            if (testes == 1) {
                RegistroSelecao(registros, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    registros = registrosAux;
                    RegistroSelecao(registros, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "registrosSelecaoTest.txt");
            }
        } else if (alg == 3) {
            if (testes == 1) {
                RegistroInsercao(registros, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    registros = registrosAux;
                    RegistroInsercao(registros, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "registrosInsercaoTest.txt");
            }
        } else if (alg == 4) {
            if (testes == 1) {
                RegistroShellsort(registros, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    registros = registrosAux;
                    RegistroShellsort(registros, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "registrosShellTest.txt");
            }
        } else if (alg == 5) {
            if (testes == 1) {
                RegistroQuicksort(registros, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    registros = registrosAux;
                    RegistroQuicksort(registros, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "registrosQuickTest.txt");
            }
        } else if (alg == 6) {
            if (testes == 1) {
                RegistroBogosort(registros, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    registros = registrosAux;
                    RegistroBogosort(registros, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "registrosBogoTest.txt");
            }
        } else if (alg == 7) {
            if (testes == 1) {
                RegistroGnomesort(registros, n);
            } else {
                for (int i = 0; i < 5; ++i) {
                    registros = registrosAux;
                    RegistroGnomesort(registros, n);
                    somaComp += comp;
                    somaMov += mov;
                    somaTempo += time_taken;
                }
                strcat(fileName, "registrosGnomeTest.txt");
            }
        }

    }

    if (testes == 2) {
        file = fopen(fileName, "w");
        printf("%s", fileName);
        if(file == NULL)
        {
            printf("O arquivo nao foi criado.\n");
            exit(EXIT_FAILURE);
        }

        double mediaTempo, mediaMov, mediaComp;
        mediaTempo = somaTempo/5;
        mediaComp = somaComp/5;
        mediaMov = somaMov/5;

        fputs("\nTamanho: ", file);
        fprintf(file, "%d", n);
        fputs("\nMedia de movimentacoes: ", file);
        fprintf(file, "%.4f", mediaMov);
        fputs("\nMedia de comparacoes: ", file);
        fprintf(file, "%.4f", mediaComp);
        fputs("\nTempo medio: ", file);
        fprintf(file, "%.10f", mediaTempo);
        fputs(" segundos.\n", file);
        fclose(file);
    }
}

void RegistroBubble (Registro* v, int n ){
    clock_t t;
    t = clock();
    mov = 0;
    comp = 0;
    int i, j, troca;
    Registro aux;

    for( i = 0 ; i < n-1 ; i++ ) {
         troca = 0;
         for( j = 1 ; j < n-i ; j++ ) {
             comp++;
             if ( v[j].chave < v[j-1].chave ) {
                 mov++;
                 aux = v[j];
                 v[j] = v[j-1];
                 v[j-1] = aux;
                 troca = 1;
             }
         }
         if (troca == 0)
         break;
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

 void RegistroSelecao (Registro* v, int n){
     clock_t t;
     t = clock();
     mov = 0;
     comp = 0;
     int i, j, Min;
     Registro aux;

     for (i = 0; i < n - 1; i++) {
         Min = i;
         for (j = i + 1 ; j < n; j++) {
             comp++;
             if (v[j].chave < v[Min].chave) {
                 Min = j;
             }
             mov++;
             aux = v[Min];
             v[Min] = v[i];
             v[i] = aux;
         }
     }
     t = clock() - t;
     time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void RegistroInsercao (Registro* v, int n ){
    clock_t t;
    t = clock();
    mov = 0;
    comp = 0;
    int i,j;
    Registro aux;
    for (i = 1; i < n; i++){
        aux = v[i];
        j = i - 1;
        comp++;
        while ( ( j >= 0 ) && ( aux.chave < v[j].chave ) ){
            mov++;
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void RegistroShellsort (Registro * v, int n){
    clock_t t;
    t = clock();
    mov = 0;
    comp = 0;
    int i, j;
    int h = 1;
    Registro aux;

    do h = h * 3 + 1; while (h < n);
    do{
        h = h/3;
        for( i = h ; i < n ; i++ ){
            aux = v[i]; j = i;
            comp++;
            while (v[j - h].chave > aux.chave){
                mov++;
                v[j] = v[j - h]; j -= h;
                if (j < h) break;
            }
            v[j] = aux;
        }
    }while (h != 1);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void VetorBubble (int v[], int n ){
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;

    int i, j, troca;
    int aux;

    for( i = 0 ; i < n-1 ; i++ ) {
        troca = 0;
        for( j = 1 ; j < n-i ; j++ ) {
            comp++;
            if ( v[j] < v[j-1] ) {
                mov++;
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
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void VetorSelecao (int v[], int n){
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;
    int i, j, Min;
    int aux;

    for (i = 0; i < n - 1; i++) {
        Min = i;
        for (j = i + 1 ; j < n; j++) {
            comp++;
            if (v[j] < v[Min]) {
                Min = j;
            }
            mov++;
            aux = v[Min];
            v[Min] = v[i];
            v[i] = aux;
        }
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void VetorInsercao (int v[], int n ){
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;
    int i,j;
    int aux;
    for (i = 1; i < n; i++){
        aux = v[i];
        j = i - 1;
        comp++;
        while ( ( j >= 0 ) && ( aux < v[j] ) ){
            mov++;
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void VetorShellsort (int v[], int n){
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;
    int i, j;
    int h = 1;
    int aux;

    do h = h * 3 + 1; while (h < n);
    do{
        h = h/3;
        for( i = h ; i < n ; i++ ){
            aux = v[i];
            j = i;
            comp++;
            while (v[j - h] > aux){
                mov++;
                v[j] = v[j - h];
                j -= h;
                if (j < h) break;
            }
            v[j] = aux;
        }
    }while (h != 1);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void RegistroQuicksort (Registro * v, int n) {
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;
    RegistroOrdena(0, n-1, v);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void VetorQuicksort (int v[], int n) {
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;
    VetorOrdena(0, n-1, v);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void RegistroOrdena(int Esq, int Dir, Registro *A)
{
    int i,j;
    RegistroParticao(Esq, Dir, &i, &j, A);
    if (Esq < j) RegistroOrdena(Esq, j, A);
    if (i < Dir) RegistroOrdena(i, Dir, A);
}

void RegistroParticao(int Esq, int Dir, int *i, int *j, Registro *A){
    Registro pivo, aux;
    *i = Esq; *j = Dir;
    pivo = A[(*i + *j)/2];
    do
    {
        comp++;
        while (pivo.chave > A[*i].chave) (*i)++;
        while (pivo.chave < A[*j].chave) (*j)--;
        if (*i <= *j)
        {
            mov++;
            aux = A[*i]; A[*i] = A[*j]; A[*j] = aux;
            (*i)++; (*j)--;
        }
    } while (*i <= *j);
}

void VetorOrdena(int Esq, int Dir, int v[])
{
    int i,j;
    VetorParticao(Esq, Dir, &i, &j, v);
    if (Esq < j) VetorOrdena(Esq, j, v);
    if (i < Dir) VetorOrdena(i, Dir, v);
}

void VetorParticao(int Esq, int Dir, int *i, int *j, int v[]){
    int pivo, aux;
    *i = Esq; *j = Dir;
    pivo = v[(*i + *j)/2];
    do
    {
        comp++;
        while (pivo > v[*i]) (*i)++;
        while (pivo < v[*j]) (*j)--;
        if (*i <= *j)
        {
            mov++;
            aux = v[*i]; v[*i] = v[*j]; v[*j] = aux;
            (*i)++; (*j)--;
        }
    } while (*i <= *j);
}

bool IsVetorSorted(int v[], int n)
{
    while ( --n >= 1 ) {
        comp++;
        if ( v[n] < v[n-1] ) return false;
    }
    return true;
}

bool IsRegistroSorted(Registro *v, int n)
{
    while ( --n >= 1 ) {
        comp++;
        if ( v[n].chave < v[n-1].chave ) return false;
    }
    return true;
}

void ShuffleRegistro(Registro *v, int n)
{
    int i, r;
    Registro t;
    for(i=0; i < n; i++) {
        mov++;
        t = v[i];
        r = rand() % n;
        v[i] = v[r];
        v[r] = t;
    }
}

void ShuffleVetor(int v[], int n)
{
    int i, t, r;
    for(i=0; i < n; i++) {
        mov++;
        t = v[i];
        r = rand() % n;
        v[i] = v[r];
        v[r] = t;
    }
}

void VetorBogosort(int v[], int n)
{
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;
    while ( !IsVetorSorted(v, n) ) ShuffleVetor(v, n);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void RegistroBogosort(Registro *v, int n)
{
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;
    while ( !IsRegistroSorted(v, n) ) ShuffleRegistro(v, n);
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void VetorGnomesort(int v[], int n)
{
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;
    int i = 0;
    int aux;

    while (i < n) {
        if (i == 0)
            i++;
        comp++;
        if (v[i] >= v[i - 1])
            i++;
        else {
            mov++;
            aux = v[i];
            v[i] = v[i-1];
            v[i-1] = aux;
            i--;
        }
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void RegistroGnomesort(Registro *v, int n)
{
    clock_t t;
    t = clock();
    comp = 0;
    mov = 0;
    int i = 0;
    Registro aux;

    while (i < n) {
        if (i == 0)
            i++;
        comp++;
        if (v[i].chave >= v[i - 1].chave)
            i++;
        else {
            mov++;
            aux = v[i];
            v[i] = v[i-1];
            v[i-1] = aux;
            i--;
        }
    }
    t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
}

void VetorMerge(int v[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = v[l + i];
    for (j = 0; j < n2; j++)
        R[j] = v[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void VetorMergeSort(int v[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        VetorMergeSort(v, l, m);
        VetorMergeSort(v, m + 1, r);

        VetorMerge(v, l, m, r);
    }
}