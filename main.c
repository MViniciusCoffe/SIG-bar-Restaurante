#include <stdio.h>
#include <stdlib.h>
#include "telas.h"
#include "pedidos.h"
#include "pause.h"
#include "reservas.h"
#include "cardapio.h"
#include "relatorios.h"
#include "clientes.h"

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
                    navegacao_cardapio();
                }
                else if (op_menu == '3') //////////////////// RESERVAS
                {
                    navegacao_reserva();
                }
                else if (op_menu == '4') //////////////////// RELATÓRIOS
                {
                    navegacao_relatorios();
                }
                else if (op_menu == '5') //////////////////// CLIENTES
                {
                    navegacao_clientes();
                }
                else if (op_menu == '0') //////////////////// VOLTAR
                {
                    printf("\n>>> Voltando a tela de gestão.\n");
                    printf("\nPressione qualquer tecla para continuar...\n");
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
