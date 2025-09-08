#include <stdio.h>
#include <stdlib.h>
#include "reservas.h"
#include "pause.h"

void tela_reservas(void)
{
    printf("\n");
    printf("╔═════════════════════════════════════════════════════════════════════╗\n");
    printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                   ║\n");
    printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                   ║\n");
    printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                   ║\n");
    printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                   ║\n");
    printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                   ║\n");
    printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                   ║\n");
    printf("╠═════════════════════════════════════════════════════════════════════╣\n");
    printf("║                        >>> RESERVAS <<<                             ║\n");
    printf("║                                                                     ║\n");
    printf("║   1. Criar reserva                                                  ║\n");
    printf("║   2. Finalizar reserva                                              ║\n");
    printf("║   3. Listar reservas                                                ║\n");
    printf("║   0. Voltar ao menu anterior                                        ║\n");
    printf("║                                                                     ║\n");
    printf("╚═════════════════════════════════════════════════════════════════════╝\n");
}

void criar_reserva(void)
{
    char nome_cliente[50];
    char data[11]; // formato: dd/mm/aaaa
    char hora[6];  // formato: hh:mm
    int mesa;

    system("clear||cls");
    printf("\n>>> Criar Reserva\n");

    printf("Nome do cliente: ");
    scanf(" %s[^\n]", nome_cliente); // permite espaços

    printf("Data da reserva (dd/mm/aaaa): ");
    scanf("%s", data);

    printf("Hora da reserva (hh:mm): ");
    scanf("%s", hora);

    printf("Número da mesa: ");
    scanf("%d", &mesa);

    printf("\nReserva criada com sucesso!\n");
    limpar_buffer_teclas();
}

void listar_reserva(void)
{
    system("clear||cls");
    printf("\n>>> Listar Reservas\n");

    // Exemplo (substituir por leitura real de dados depois)
    printf("1. João - 10/09/2025 - 19:00 - Mesa 5\n");
    printf("2. Maria - 10/09/2025 - 20:00 - Mesa 3\n");
    limpar_buffer_teclas();
}

void finalizar_reserva(void)
{
    char nome_cliente[50];

    system("clear||cls");
    printf("\n>>> Cancelar Reserva\n");

    printf("Nome do cliente para cancelar a reserva: ");
    scanf(" %s[^\n]", nome_cliente); // permite espaços

    printf("\nReserva cancelada com sucesso!\n");
    // buscar e remover a reserva em uma estrutura real
    limpar_buffer_teclas();
}

void navegacao_reserva(void)
{
    char op_reserva = ' ';

    while (op_reserva != '0')
    {
        system("clear||cls");
        tela_reservas();

        printf("\nDigite a opção desejada: ");
        op_reserva = getchar();
        getchar();

        if (op_reserva == '1') //////////////////// CRIAR RESERVA
        {
            criar_reserva();
            press_qualquer_tecla();
        }
        else if (op_reserva == '2') //////////////////// FINALIZAR RESERVA
        {
            finalizar_reserva();
            press_qualquer_tecla();
        }
        else if (op_reserva == '3') //////////////////// LISTAR RESERVAS
        {
            listar_reserva();
            press_qualquer_tecla();
        }
        else if (op_reserva == '0') //////////////////// VOLTAR
        {
            printf("\n>>> Voltando ao menu!\n");
            printf("\nPressione qualquer tecla para continuar\n");
            press_qualquer_tecla();
        }
        else
        {
            printf("\nOpção inválida! Tente novamente.\n");
            printf("Pressione qualquer tecla para continuar...");
            press_qualquer_tecla();
        }
    }
}