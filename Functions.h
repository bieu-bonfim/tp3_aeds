#include "Registro.h"
#include <stdbool.h>

void Bubble(int tipo, int n);
void Selecao(int tipo, int n);
void Insercao(int tipo, int n);
void Shellsort(int tipo, int n);
void Quicksort(int tipo, int n);
void Bogosort(int tipo, int n);
void Gnomesort(int tipo, int n);

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
void Shuffle(int *a, int n);
void VetorBogosort(int v[], int n);
void RegistroBogosort(Registro *v, int n);
void VetorGnomesort(int v[], int n);
void RegistroGnomesort(Registro *v, int n);