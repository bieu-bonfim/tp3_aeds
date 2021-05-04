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

    if (opcao == 1) {
        MenuTamanho(1);
    } else if (opcao == 2) {
        MenuTamanho(2);
    } else {
        return;
    }
}

void MenuTamanho(int tipo) {
    int opcao;

    printf("\n--------- Menu ---------");
    printf("\n------- Tamanho --------");
    printf("\n------------------------");

    printf("\n\n1 - 1.000");
    printf("\n2 - 5.000");
    printf("\n3 - 10.000");
    printf("\n4 - 50.000");
    printf("\n5 - 100.000");
    printf("\n6 - 500.000");
    printf("\n7 - 1.000.000");
    printf("\n0 - Escolher outro tipo de dados");

    printf("\n\nEscolha o tamanho do conjunto: ");
    scanf("%d", &opcao);
}

void MenuAlgoritmo(int tipo, int n) {
    int opcao;

    printf("\n--------- Menu ---------");
    printf("\n------- Algoritmo ------");
    printf("\n------------------------");

    printf("\n\nTamanho escolhido: %n", &n);


    printf("\n\n1 - Bolha");
    printf("\n2 - Seleção");
    printf("\n3 - Inserção");
    printf("\n4 - Shellsort");
    printf("\n5 - Quicksort");
    printf("\n6 - Bogosort");
    printf("\n7 - Gnomeort");
    printf("\n0 - Escolher outro tamanho");

    printf("\n\nEscolha o tamanho do conjunto: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            Bubble(tipo, n);
            break;
        case 2:
            Selecao(tipo, n);
            break;
        case 3:
            Insercao(tipo, n);
            break;
        case 4:
            Shellsort(tipo, n);
            break;
        case 5:
            Quicksort(tipo, n);
            break;
        case 6:
            Bogosort(tipo, n);
            break;
        case 7:
            Gnomesort(tipo, n);
            break;
        default:
            MenuTamanho(tipo);
    }
}