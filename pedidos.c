#include "pedidos.h"

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
    printf("║   1. Adicionar itens ao pedido                                        ║\n");
    printf("║   2. Remover itens do pedido                                          ║\n");
    printf("║   3. Finalizar pedido                                                 ║\n");
    printf("║   0. Voltar ao menu anterior                                          ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}

void adicionar_itens(void)
{
    char num_mesa[10];
    char num_prato[10];

    system("clear||cls");
    printf("\n>>> Adicionar itens.\n");

    printf("Digite o número da mesa: ");
    scanf("%s", num_mesa);

    printf("Digite o número do prato: ");
    scanf("%s", num_prato);

    printf("\nitem adicionado com sucesso!\n");
}

void remover_itens(void)
{
    char num_mesa[10];
    char num_prato[10];
    system("clear||cls");
    printf("\n>>> Remover itens.\n");

    printf("\nDigite o número da mesa: ");
    scanf("%s", num_mesa);

    printf("\nDigite o número do prato: ");
    scanf("%s", num_prato);

    printf("\nItem removido com sucesso!\n");
}

void finalizar_pedido(void)
{
    char confirmacao[2];
    system("clear||cls");
    printf("\n>>> Finalizar pedido\n");

    printf("Deseja finalizar o pedido? S/N: ");
    scanf("%s", confirmacao);

    if (confirmacao[0] == 'S' || confirmacao[0] == 's')
    {
        printf("\nPedido finalizado com sucesso!\n");
    }
    else
    {
        printf("\nPedido não finalizado!");
    }
}