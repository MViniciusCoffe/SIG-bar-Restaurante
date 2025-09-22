#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pedidos.h"
#include "cardapio.h"
#include "pause.h"

void tela_pedidos(void)
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
    printf("║                          >>> PEDIDOS <<<                              ║\n");
    printf("║                                                                       ║\n");
    printf("║   1. Criar pedido                                                     ║\n");
    printf("║   2. Cancelar pedido                                                  ║\n");
    printf("║   3. Finalizar pedido                                                 ║\n");
    printf("║   0. Voltar ao menu anterior                                          ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}

void tela_itens_pedidos(void)
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
    printf("║                           >>> ITENS <<<                               ║\n");
    printf("║                                                                       ║\n");
    printf("║   1. Adicionar itens ao pedido                                        ║\n");
    printf("║   2. Remover itens do pedido                                          ║\n");
    printf("║   3. Exibir itens adicionados                                         ║\n");
    printf("║   0. Voltar para pedidos                                              ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}

void tela_adicionar_itens(void)
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
    printf("║                           >>> ITENS <<<                               ║\n");
    printf("║                                                                       ║\n");
    printf("║   1. Adicionar Pratos                                                 ║\n");
    printf("║   2. Adicionar Bebidas                                                ║\n");
    printf("║   3. Adicionar Sobremesas                                             ║\n");
    printf("║   0. Voltar para tela itens                                           ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}

void tela_remover_itens(void)
{
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════╗\n");
    printf("║               >>> SEUS ITENS ADICIONADOS A REMOVER <<<               ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════╣\n");
    printf("║  1. Prato Executivo......................... R$ 25,00                ║\n");
    printf("║  2. Brownie com Sorvete..................... R$ 12,00                ║\n");
    printf("║  3. Refrigerante Lata....................... R$ 5,00                 ║\n");
    printf("║                                                                      ║\n");
    printf("║  Total             |........................ R$ 42,00                ║\n");
    printf("║                                                                      ║\n");
    printf("║             Digite o número do item para remove-lo...                ║\n");
    printf("║             Ou pressione 0 para voltar...                            ║\n");
    printf("║                                                                      ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════╝\n");
}

void tela_exibir_itens(void)
{
    system("clear||cls"); // Precisa disso daqui, pois é só uma função de exibição
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════╗\n");
    printf("║               >>> SEUS ITENS ADICIONADOS A REMOVER <<<               ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════╣\n");
    printf("║  1. Prato Executivo......................... R$ 25,00                ║\n");
    printf("║  2. Brownie com Sorvete..................... R$ 12,00                ║\n");
    printf("║  3. Refrigerante Lata....................... R$ 5,00                 ║\n");
    printf("║                                                                      ║\n");
    printf("║  Total             |........................ R$ 42,00                ║\n");
    printf("║                                                                      ║\n");
    printf("║               Ou pressione 0 para voltar...                          ║\n");
    printf("║                                                                      ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════╝\n");
}

// ------------------------------------------------------------
// ADICIONAR ITENS
// ------------------------------------------------------------
void adicionar_itens(char op_adicionar)
{
    if (op_adicionar == '1')
    {
        mostrar_pratos();
        printf("\n>>> Adicione um item do cardápio de PRATOS\n");
    }
    else if (op_adicionar == '2')
    {
        mostrar_bebidas();
        printf("\n>>> Adicione um item do cardápio de BEBIDAS\n");
    }
    else if (op_adicionar == '3')
    {
        mostrar_sobremesas();
        printf("\n>>> Adicione um item do cardápio de SOBREMESAS\n");
    }
    else
    {
        printf("\n>>> Opção inválida!\n");
        press_qualquer_tecla();
        return;
    }

    char num_item[10];
    printf("Digite o número do item escolhido: ");
    scanf("%9s", num_item);

    // Simples validação pelo primeiro caractere
    if (num_item[0] < '1' || num_item[0] > '9')
    {
        printf("\n>>> Item inválido!\n");
    }
    else
    {
        printf("\nItem %s adicionado com sucesso ao pedido!\n", num_item);
    }

    limpar_buffer_teclas();
    press_qualquer_tecla();
}

// ------------------------------------------------------------
// REMOVER ITENS
// ------------------------------------------------------------
void remover_itens(void)
{
    char num_item[10];
    system("clear||cls");
    tela_remover_itens();

    printf("\nDigite o número do item que deseja remover (ou 0 para voltar): ");
    scanf("%9s", num_item);

    if (num_item[0] == '0')
    {
        printf("\n>>> Nenhum item removido.\n");
    }
    else
    {
        printf("\n>>> Item %s removido com sucesso!\n", num_item);
    }

    limpar_buffer_teclas();
    press_qualquer_tecla();
}

// ------------------------------------------------------------
// CANCELAR PEDIDO
// ------------------------------------------------------------
void cancelar_pedido(void)
{
    char confirmacao[3];
    system("clear||cls");
    printf("\n>>> Cancelar pedido\n");

    printf("Deseja realmente cancelar o pedido? (S/N): ");
    scanf("%2s", confirmacao);

    if (confirmacao[0] == 'S' || confirmacao[0] == 's')
    {
        printf("\n>>> Pedido cancelado com sucesso!\n");
    }
    else
    {
        printf("\n>>> Pedido não foi cancelado.\n");
    }

    limpar_buffer_teclas();
    press_qualquer_tecla();
}

// ------------------------------------------------------------
// FINALIZAR PEDIDO
// ------------------------------------------------------------
void finalizar_pedido(void)
{
    char confirmacao[3];
    system("clear||cls");
    printf("\n>>> Finalizar pedido\n");

    printf("Deseja realmente finalizar o pedido? (S/N): ");
    scanf("%2s", confirmacao);

    if (confirmacao[0] == 'S' || confirmacao[0] == 's')
    {
        printf("\n>>> Pedido finalizado com sucesso!\n");
    }
    else
    {
        printf("\n>>> Pedido não foi finalizado.\n");
    }

    limpar_buffer_teclas();
    press_qualquer_tecla();
}

// ------------------------------------------------------------
// NAVEGAÇÃO
// ------------------------------------------------------------
void navegacao_pedidos(void)
{
    char op_pedidos = ' ';

    while (op_pedidos != '0')
    {
        system("clear||cls");
        tela_pedidos();

        printf("\nDigite a opção desejada: ");
        op_pedidos = getchar();
        limpar_buffer_teclas();

        if (op_pedidos == '1') //////////////////// CRIAR PEDIDO
        {
            char op_itens = ' ';

            while (op_itens != '0')
            {
                system("clear||cls");
                tela_itens_pedidos();

                printf("\nDigite a opção desejada: ");
                op_itens = getchar();
                limpar_buffer_teclas();

                if (op_itens == '1') //////////////////// ADICIONAR ITENS
                {
                    char op_adicionar = ' ';

                    while (op_adicionar != '0')
                    {
                        system("clear||cls");
                        tela_adicionar_itens();

                        printf("\nDigite a opção desejada: ");
                        op_adicionar = getchar();
                        limpar_buffer_teclas();

                        if (op_adicionar == '1' || op_adicionar == '2' || op_adicionar == '3')
                        {
                            adicionar_itens(op_adicionar);
                        }
                        else if (op_adicionar == '0')
                        {
                            printf("\n>>> Voltando à tela de itens...\n");
                            press_qualquer_tecla();
                        }
                        else
                        {
                            printf("\n>>> Opção inválida! Tente novamente.\n");
                            press_qualquer_tecla();
                        }
                    }
                }
                else if (op_itens == '2') //////////////////// REMOVER ITENS
                {
                    remover_itens();
                }
                else if (op_itens == '3') //////////////////// EXIBIR ITENS
                {
                    tela_exibir_itens();
                    press_qualquer_tecla();
                }
                else if (op_itens == '0') //////////////////// VOLTAR PARA TELA DE PEDIDOS
                {
                    printf("\n>>> Voltando à tela de pedidos...\n");
                    press_qualquer_tecla();
                }
                else
                {
                    printf("\n>>> Opção inválida! Tente novamente.\n");
                    press_qualquer_tecla();
                }
            }
        }
        else if (op_pedidos == '2') //////////////////// CANCELAR PEDIDO
        {
            cancelar_pedido();
        }
        else if (op_pedidos == '3') //////////////////// FINALIZAR PEDIDO
        {
            finalizar_pedido();
        }
        else if (op_pedidos == '0') //////////////////// VOLTAR AO MENU PRINCIPAL
        {
            printf("\n>>> Voltando ao menu principal...\n");
            press_qualquer_tecla();
        }
        else
        {
            printf("\n>>> Opção inválida! Tente novamente.\n");
            press_qualquer_tecla();
        }
    }
}
