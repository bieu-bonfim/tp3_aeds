#include "Registro.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"

void InicializarRegistros(Registro registro[], Registro registroAux[], int n) {
    for (int i = 0; i < n; ++i) {
        registro[i].chave = rand() % n;
        rand_string(registro[i].cad0);
        rand_string(registro[i].cad1);
        rand_string(registro[i].cad2);
        rand_string(registro[i].cad3);
        rand_string(registro[i].cad4);
        rand_string(registro[i].cad5);
        rand_string(registro[i].cad6);
        rand_string(registro[i].cad7);
        rand_string(registro[i].cad8);
        rand_string(registro[i].cad9);
        registro[i].real0 = ((float)rand()/(float)(RAND_MAX)) * 10;
        registro[i].real1 = ((float)rand()/(float)(RAND_MAX)) * 10;
        registro[i].real2 = ((float)rand()/(float)(RAND_MAX)) * 10;
        registro[i].real3 = ((float)rand()/(float)(RAND_MAX)) * 10;

        registroAux[i] = registro[i];
    }
}

void PrintRegistros(Registro registro[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("\nChave: %d", registro[i].chave);
    }
}

char* rand_string(char* str) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int size = 200;

    --size;
    for (int n = 0; n < size; n++) {
        int key = rand() % (int) (sizeof charset - 1);
        str[n] = charset[key];
    }

    str[size] = '\0';
    return str;
}