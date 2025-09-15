#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include "pause.h"

void tela_clientes(void)
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
    printf("║                             >>> CLIENTES <<<                             ║\n");
    printf("║                                                                          ║\n");
    printf("║   1. Listar clientes                                                     ║\n");
    printf("║   2. cadastrar clientes                                                  ║\n");
    printf("║   3. remover clinetes                                                    ║\n");
    printf("║   0. Voltar ao menu anterior                                             ║\n");
    printf("║                                                                          ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
}

void listar_clientes(void)
{
    system("clear||cls");
    printf("\n>>> listar clientes.\n");

    printf("clientes cadastrados: \n");
    printf("joao \n");
    printf("luis \n");
    printf("marcus \n");
}

void cadastrar_clientes(void)
{
    char clnt_nome [50];
    char clnt_cpf [11];

    system("clear||cls");
    printf("\n>>> cadstrar clientes.\n");

    printf("Digite o nome do cliente: ");
    scanf("%s", clnt_nome);

    printf("Digite o CPF do cliente: ");
    scanf("%s", clnt_cpf);

    printf("\ncliente cadastrado com sucesso!\n");
    limpar_buffer_teclas();
}

void remover_clientes(void)
{
    char clnt_cpf [11];

    system("clear||cls");
    printf("\n>>> remover clientes.\n");

    printf("Digite o CPF do cliente: ");
    scanf("%s", clnt_cpf);

    printf("\ncliente removido com sucesso!\n");
    limpar_buffer_teclas();
}

void navegacao_clientes(void)
{
    char op_clientes = ' ';

    while (op_clientes != '0')
    {
        system("clear||cls");
        tela_clientes();

        printf("\nDigite a opção desejada: ");
        op_clientes = getchar();
        getchar();

        if (op_clientes == '1') //////////////////// LISTRAR CLIENTES
        {
            listar_clientes();
            press_qualquer_tecla();
        }
        else if (op_clientes == '2') //////////////////// CADASTAR CLIENTES
        {
            cadastrar_clientes();
            press_qualquer_tecla();
        }
        else if (op_clientes == '3') //////////////////// REMOVER CLIENTES
        {
            remover_clientes();
            press_qualquer_tecla();
        }
        else if (op_clientes == '0') //////////////////// VOLTAR PARA TELA DE MENU
        {
            printf("\n>>> Voltando ao menu!\n");
            printf("\nPressione qualquer tecla para continuar\n");
            press_qualquer_tecla();
        }
        else
        {
            printf("\n>>> Opção inválida! Tente novamente.\n");
            press_qualquer_tecla();
        }
    }
}
