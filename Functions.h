#include "Registro.h"
#include <stdbool.h>
void PrintVetor(int v[], int n);
void Testar(int tipo, int n, int alg, int testes);

void RegistroBubble (Registro* v, int n );
void RegistroSelecao (Registro* v, int n);
void RegistroInsercao (Registro* v, int n );
void RegistroShellsort (Registro * v, int n);
void VetorBubble (int v[], int n );
void VetorSelecao (int v[], int n);
void VetorInsercao (int v[], int n );
void VetorShellsort (int v[], int n);
bool IsVetorSorted(int v[], int n);
bool IsRegistroSorted(Registro *v, int n);
void VetorBogosort(int v[], int n);
void RegistroBogosort(Registro *v, int n);
void VetorGnomesort(int v[], int n);
void RegistroGnomesort(Registro *v, int n);
void VetorQuicksort (int v[], int n);
void RegistroQuicksort (Registro * v, int n);
void RegistroParticao(int Esq, int Dir, int *i, int *j, Registro *A);
void RegistroOrdena(int Esq, int Dir, Registro *A);
void VetorOrdena(int Esq, int Dir, int v[]);
void VetorParticao(int Esq, int Dir, int *i, int *j, int v[]);
void VetorMerge(int v[], int l, int m, int r);
void VetorMergesort(int v[], int l, int r);
void RegistroMergesort(Registro *v, int l, int r);
void RegistroMerge(Registro *v, int l, int m, int r);
void VetorHeapsort(int arr[], int n);
void VetorHeapify(int v[], int n, int i);
void RegistroHeapify(Registro v[], int n, int i);
void RegistroHeapsort(Registro v[], int n);