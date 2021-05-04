#include "Registro.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void InicializarRegistros(Registro registro[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        registro[n].chave = rand() % n;
        rand_string(registro[n].cad0);
        rand_string(registro[n].cad1);
        rand_string(registro[n].cad2);
        rand_string(registro[n].cad3);
        rand_string(registro[n].cad4);
        rand_string(registro[n].cad5);
        rand_string(registro[n].cad6);
        rand_string(registro[n].cad7);
        rand_string(registro[n].cad8);
        rand_string(registro[n].cad9);
        registro[n].real0 = ((float)rand()/(float)(RAND_MAX)) * 10;
        registro[n].real1 = ((float)rand()/(float)(RAND_MAX)) * 10;
        registro[n].real2 = ((float)rand()/(float)(RAND_MAX)) * 10;
        registro[n].real3 = ((float)rand()/(float)(RAND_MAX)) * 10;
    }
}

char* rand_string(char* str) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int size = 200;
    srand(time(NULL));

    --size;
    for (int n = 0; n < size; n++) {
        int key = rand() % (int) (sizeof charset - 1);
        str[n] = charset[key];
    }

    str[size] = '\0';
    return str;
}