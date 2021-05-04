#include <stdio.h>
#include <time.h>
#include "Menu.h"
#include "Functions.h"

void MenuInicial() {
    int opcao;

    printf("\n----- Bem Vinde ao -----");
    printf("\n-------- Sistema -------");
    printf("\n------------------------");

    printf("\n\n1 - Conjunto de Valores Inteiros");
    printf("\n2 - Conjunto de Registros");

    printf("\n\nEscolha o modo de uso: ");
    scanf("%d", &opcao);
}