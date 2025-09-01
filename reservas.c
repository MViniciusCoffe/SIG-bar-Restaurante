#include <stdio.h>
#include <stdlib.h>  // Necessário para system()

#include "reservas.h"

void tela_reservas(void)
{
    system("clear||cls");
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
    printf("║   2. Cancelar reserva                                               ║\n");
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
}


void listar_reserva(void)
{
    system("clear||cls");
    printf("\n>>> Listar Reservas\n");

    // Exemplo (substituir por leitura real de dados depois)
    printf("1. João - 10/09/2025 - 19:00 - Mesa 5\n");
    printf("2. Maria - 10/09/2025 - 20:00 - Mesa 3\n");
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
}