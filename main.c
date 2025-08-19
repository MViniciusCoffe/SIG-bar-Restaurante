#include <stdio.h>
#include <stdlib.h>
#include "telas.c"

int main(void) {
    char op = ' ';

    while (op != '0') {
        system("clear||cls");
        tela_gestao();

        printf("\nDigite a opção desejada: ");
        op = getchar();
        getchar();

        if (op == '1') {
            char menuOp = ' ';
            while (menuOp != '0') {
                system("clear||cls");
                tela_menu_principal();

                printf("\nDigite a opção desejada: ");
                menuOp = getchar();
                getchar();

                if (menuOp == '1') {
                    tela_pedidos();
                } else if (menuOp == '2') {
                    tela_cardapio();
                } else if (menuOp == '3') {
                    tela_reservas();
                } else if (menuOp == '4') {
                    tela_relatorios();
                } else if (menuOp == '0') {
                } else {
                    printf("\nOpção inválida! Pressione <ENTER> para tentar novamente...\n");
                    getchar();
                }
            }
        } else if (op == '2') {
            tela_sobre();
        } else if (op == '3') {
            tela_equipe();
        } else if (op != '0') {
            printf("\nOpção inválida! Pressione <ENTER> para tentar novamente...\n");
            getchar();
        }
    }

    tela_finalizacao();

    return 0;
}
