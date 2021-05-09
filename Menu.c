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

    switch (opcao) {
        case 1:
            MenuAlgoritmo(tipo, 1000);
        case 2:
            MenuAlgoritmo(tipo, 5000);
        case 3:
            MenuAlgoritmo(tipo, 10000);
        case 4:
            MenuAlgoritmo(tipo, 50000);
        case 5:
            MenuAlgoritmo(tipo, 100000);
        case 6:
            MenuAlgoritmo(tipo, 500000);
        case 7:
            MenuAlgoritmo(tipo, 1000000);
        default:
            MenuInicial();
            break;
    }

}

void MenuAlgoritmo(int tipo, int n) {
    int opcao;

    printf("\n--------- Menu ---------");
    printf("\n------- Algoritmo ------");
    printf("\n------------------------");

    printf("\n\nTamanho escolhido: %d", n);

    printf("\n\n1 - Bolha");
    printf("\n2 - Selecao");
    printf("\n3 - Insercao");
    printf("\n4 - Shellsort");
    printf("\n5 - Quicksort");
    printf("\n6 - Bogosort");
    printf("\n7 - Gnomesort");
    printf("\n8 - Mergesort");
    printf("\n9 - Heapsort");
    printf("\n0 - Escolher outro tamanho");

    printf("\n\nEscolha o algoritmo: ");
    scanf("%d", &opcao);

    if (opcao != 0) {
        MenuOpcaoTeste(tipo, n, opcao);
    } else {
        MenuTamanho(tipo);
    }
    MenuAlgoritmo(tipo, n);
}

void MenuOpcaoTeste(int tipo, int n, int alg) {
    int opcao;

    printf("\n--------- Menu ---------");
    printf("\n----- Tipo de Teste ----");
    printf("\n------------------------");

    printf("\n\nTamanho escolhido: %d", n);

    printf("\n\n1 - Teste unitario");
    printf("\n2 - Teste final");
    printf("\n0 - Escolher outro algoritmo");

    printf("\n\nEscolha o tipo de teste: ");
    scanf("%d", &opcao);
    if (opcao != 0) {
        Testar(tipo, n, alg, opcao);
    } else {
        MenuAlgoritmo(tipo, n);
    }
    MenuOpcaoTeste(tipo, n, alg);
}