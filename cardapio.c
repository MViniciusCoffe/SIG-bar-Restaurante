#include <stdio.h>
#include <stdlib.h>
#include "cardapio.h"
#include "pause.h"

void tela_cardapio(void)
{
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                        ║\n");
    printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                        ║\n");
    printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                        ║\n");
    printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                        ║\n");
    printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                        ║\n");
    printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                        ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                             >>> CARDÁPIO <<<                             ║\n");
    printf("║                                                                          ║\n");
    printf("║   1. Pratos                                                              ║\n");
    printf("║   2. Bebidas                                                             ║\n");
    printf("║   3. Sobremesas                                                          ║\n");
    printf("║   0. Voltar ao menu anterior                                             ║\n");
    printf("║                                                                          ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
}

void mostrar_pratos(void)
{
    system("clear||cls");
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════╗\n");
    printf("║                             >>> PRATOS <<<                           ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════╣\n");
    printf("║  1. Prato Executivo......................... R$ 25,00                ║\n");
    printf("║  2. Lasanha de Frango....................... R$ 28,00                ║\n");
    printf("║  3. Feijoada Completa....................... R$ 30,00                ║\n");
    printf("║                                                                      ║\n");
    printf("║             Pressione qualquer tecla para voltar...                  ║\n");
    printf("║                                                                      ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════╝\n");
}

void mostrar_bebidas(void)
{
    system("clear||cls");
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════╗\n");
    printf("║                            >>> BEBIDAS <<<                           ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════╣\n");
    printf("║  1. Refrigerante Lata...................... R$ 5,00                  ║\n");
    printf("║  2. Água Mineral........................... R$ 3,00                  ║\n");
    printf("║  3. Suco Natural........................... R$ 7,00                  ║\n");
    printf("║                                                                      ║\n");
    printf("║             Pressione qualquer tecla para voltar...                  ║\n");
    printf("║                                                                      ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════╝\n");
}

void mostrar_sobremesas(void)
{
    system("clear||cls");
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════╗\n");
    printf("║                           >>> SOBREMESAS <<<                         ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════╣\n");
    printf("║  1. Pudim de Leite......................... R$ 10,00                 ║\n");
    printf("║  2. Mousse de Maracujá..................... R$ 9,00                  ║\n");
    printf("║  3. Brownie com Sorvete.................... R$ 12,00                 ║\n");
    printf("║                                                                      ║\n");
    printf("║             Pressione qualquer tecla para voltar...                  ║\n");
    printf("║                                                                      ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════╝\n");
}

void navegacao_cardapio(void)
{
    char op = ' ';

    while (op != '0')
    {
        system("clear||cls");
        tela_cardapio();

        printf("\nDigite a opção desejada: ");
        op = getchar();
        getchar();

        if (op == '1') //////////////////// MOSTRAR PRATOS
        {
            mostrar_pratos();
            press_qualquer_tecla();
        }
        else if (op == '2') //////////////////// MOSTRAR BEBIDAS
        {
            mostrar_bebidas();
            press_qualquer_tecla();
        }
        else if (op == '3') //////////////////// MOSTRAR SOBREMESAS
        {
            mostrar_sobremesas();
            press_qualquer_tecla();
        }
        else if (op == '0') //////////////////// VOLTAR
        {
            printf("\n>>> Voltando ao menu!\n");
            printf("\nPressione qualquer tecla para continuar\n");
            press_qualquer_tecla();
        }
        else
        {
            printf("\n>>> Opção inválida! Tente novamente.\n");
            printf("\nPressione qualquer tecla para continuar...\n");
            press_qualquer_tecla();
        }
    }
}