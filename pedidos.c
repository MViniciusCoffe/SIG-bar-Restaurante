#include "pedidos.h"

void tela_pedidos(void) {
    char op = ' ';

    while (op != '0') {
        system("clear||cls");
        printf("\n");
        printf("╔═══════════════════════════════════════════════════════════════════════╗\n");
        printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                     ║\n");
        printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                     ║\n");
        printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                     ║\n");
        printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                     ║\n");
        printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                     ║\n");
        printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                     ║\n");
        printf("╠═══════════════════════════════════════════════════════════════════════╣\n");
        printf("║                          >>> PEDIDOS <<<                              ║\n");
        printf("║                                                                       ║\n");
        printf("║   1. Adicionar itens ao pedido                                        ║\n");
        printf("║   2. Remover itens do pedido                                          ║\n");
        printf("║   3. Finalizar pedido                                                 ║\n");
        printf("║   0. Voltar ao menu anterior                                          ║\n");
        printf("║                                                                       ║\n");
        printf("╚═══════════════════════════════════════════════════════════════════════╝\n");

        printf("\nDigite a opção desejada: ");
        op = getchar();
        getchar();

        if (op == '1') {
            adicionar_itens();
        } else if (op == '2') {
            remover_itens();
        } else if (op == '3') {
            finalizar_pedido();
        } else if (op == '0') {
            printf("\n>>> Retornando ao menu anterior...\n");
        } else {
            printf("\n>>> Opção inválida! Tente novamente.\n");
        }

        if (op != '0') {
            printf("\nPressione <ENTER> para continuar...\n");
            getchar();
        }
    }
}

void adicionar_itens(void) {
    system("clear||cls");
    printf("\n>>> Adicionar itens.\n");
    printf("\niten adicionado com sucesso!\n");
    printf("\nPressione <ENTER> para voltar...\n");
    getchar();
}

void remover_itens(void) {
    system("clear||cls");
    printf("\n>>> Remover itens (função ainda não implementada).\n");
    printf("\nIten removido com sucesso!\n");
    printf("\nPressione <ENTER> para voltar...\n");
    getchar();
}

void finalizar_pedido(void) {
    system("clear||cls");
    printf("\n>>> Finalizar pedido\n");
    printf("\nPedido feito com sucesso!\n");
    printf("\nPressione <ENTER> para voltar...\n");
    getchar();
}