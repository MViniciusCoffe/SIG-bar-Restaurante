#include <stdio.h>
#include <stdlib.h>
#include "relatorios.h"
#include "pause.h"

void tela_relatorios(void)
{
    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════════════════╗\n");
    printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                     ║\n");
    printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                     ║\n");
    printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                     ║\n");
    printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                     ║\n");
    printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                     ║\n");
    printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                     ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════╣\n");
    printf("║                        >>> RELATÓRIOS <<<                             ║\n");
    printf("║                                                                       ║\n");
    printf("║     1. Relatorio do dia                                               ║\n");
    printf("║     2. Relatorio do mensal                                            ║\n");
    printf("║     3. Relatorio anual                                                ║\n");
    printf("║     0. Voltar ao menu principal                                       ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}

void relatorio_vendas(void)
{
    system("clear||cls");
    printf("\n>>> RELATÓRIO DE VENDAS DO DIA <<<\n\n");
    printf("- Total de vendas: R$ 1.250,00\n");
    printf("- Total de pedidos: 45\n");
    printf("- Média por pedido: R$ 27,78\n");
    printf("\nPressione qualquer tecla para continuar...\n");
}

void relatorio_mais_vendidos(void)
{
    system("clear||cls");
    printf("\n>>> RELATÓRIO DE ITENS MAIS VENDIDOS <<<\n\n");
    printf("1. Prato Executivo .......... 15 unidades\n");
    printf("2. Refrigerante Lata ........ 12 unidades\n");
    printf("3. Brownie com Sorvete ...... 9 unidades\n");
    printf("\nPressione qualquer tecla para continuar...\n");
}

void relatorio_reservas(void)
{
    system("clear||cls");
    printf("\n>>> RELATÓRIO DE RESERVAS <<<\n\n");
    printf("- Total de reservas hoje: 12\n");
    printf("- Mesas ocupadas: 8\n");
    printf("- Mesas disponíveis: 4\n");
    printf("\nPressione qualquer tecla para continuar...\n");
}

void navegacao_relatorios(void)
{
    char op = ' ';

    while (op != '0')
    {
        system("clear||cls");
        tela_relatorios();

        printf("\nDigite a opção desejada: ");
        op = getchar();
        getchar();

        if (op == '1') //////////////////// RELATORIO VENDAS
        {
            relatorio_vendas();
            press_qualquer_tecla();
        }
        else if (op == '2') //////////////////// RELATORIO MAIS VENDIDOS
        {
            relatorio_mais_vendidos();
            press_qualquer_tecla();
        }
        else if (op == '3') //////////////////// RELATORIO RESERVAS
        {
            relatorio_reservas();
            press_qualquer_tecla();
        }
        else if (op == '0') //////////////////// VOLTAR AO MENU
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