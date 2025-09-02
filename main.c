#include <stdio.h>
#include <stdlib.h>
#include "telas.c"
#include "pedidos.c"
#include "pause.c"
#include "reservas.c"

void relatorio_do_dia(void);
void relatorio_do_mes(void);
void relatorio_do_ano(void);

int main(void)
{
    char op = ' ';

    while (op != '0')
    {
        system("clear||cls");
        tela_gestao();

        printf("\nDigite a opção desejada: ");
        op = getchar();
        getchar(); // Limpa '\n'

        if (op == '1') //////////////////// TELA PRINCIPAL
        {
            char op_menu = ' ';

            while (op_menu != '0')
            {
                system("clear||cls");
                tela_menu_principal();

                printf("\nDigite a opção desejada: ");
                op_menu = getchar();
                getchar();

                if (op_menu == '1') //////////////////// PEDIDOS
                {
                    navegacao_pedidos();
                }
                else if (op_menu == '2') //////////////////// CARDÁPIO
                {
                    tela_cardapio();
                    press_qualquer_tecla();
                }
                else if (op_menu == '3') //////////////////// RESERVAS
                {
                    navegacao_reserva();
                }
                else if (op_menu == '4') //////////////////// RELATÓRIOS
                {
                    tela_relatorios();
                    press_qualquer_tecla();
                }
                else if (op_menu == '0') //////////////////// VOLTAR
                {
                    // Voltar para tela de gestão
                }
                else
                {
                    printf("\n>>> Opção inválida! Tente novamente.\n");
                    printf("\nPressione qualquer tecla para continuar...\n");
                    press_qualquer_tecla();
                }
            }
        }
        else if (op == '2') //////////////////// TELA SOBRE
        {
            tela_sobre();
            press_qualquer_tecla();
        }
        else if (op == '3') //////////////////// TELA EQUIPE
        {
            tela_equipe();
            press_qualquer_tecla();
        }
        else if (op == '0') //////////////////// TELA FINALIZAÇÃO
        {
            tela_finalizacao();
        }
        else
        {
            printf("\n>>> Opção inválida! Tente novamente.\n");
            printf("\nPressione qualquer tecla para continuar...\n");
            press_qualquer_tecla();
        }
    }

    return 0;
}

// Implementar depois
void relatorio_vendas_dia(void)
{
    system("clear||cls");
    printf("\n>>> RELATÓRIO DE VENDAS DO DIA <<<\n\n");
    printf("- Total de vendas: R$ 1.250,00\n");
    printf("- Total de pedidos: 45\n");
    printf("- Média por pedido: R$ 27,78\n");
}

void relatorio_mais_vendidos(void)
{
    system("clear||cls");
    printf("\n>>> RELATÓRIO DE ITENS MAIS VENDIDOS <<<\n\n");
    printf("1. Prato Executivo .......... 15 unidades\n");
    printf("2. Refrigerante Lata ........ 12 unidades\n");
    printf("3. Brownie com Sorvete ...... 9 unidades\n");
}

void relatorio_reservas(void)
{
    system("clear||cls");
    printf("\n>>> RELATÓRIO DE RESERVAS <<<\n\n");
    printf("- Total de reservas hoje: 12\n");
    printf("- Mesas ocupadas: 8\n");
    printf("- Mesas disponíveis: 4\n");
}
