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
                    char op_pedidos = ' ';

                    while (op_pedidos != '0')
                    {
                        system("clear||cls");
                        tela_pedidos();

                        printf("\nDigite a opção desejada: ");
                        op_pedidos = getchar();
                        getchar();

                        if (op_pedidos == '1') //////////////////// ADICIONAR ITENS
                        {
                            adicionar_itens();
                            press_qualquer_tecla();
                        }
                        else if (op_pedidos == '2') //////////////////// REMOVER ITENS
                        {
                            remover_itens();
                            press_qualquer_tecla();
                        }
                        else if (op_pedidos == '3') //////////////////// FINALIZAR PEDIDOS
                        {
                            finalizar_pedido();
                            press_qualquer_tecla();
                        }
                        else if (op_pedidos == '0') //////////////////// VOLTAR PARA TELA PEDIDOS
                        {
                            printf("\n>>> Retornando ao menu anterior...\n");
                            printf("\nPressione qualquer tecla para continuar...\n");
                            press_qualquer_tecla();
                        }
                        else
                        {
                            printf("\n>>> Opção inválida! Tente novamente.\n");
                            press_qualquer_tecla();
                        }
                    }
                }
                else if (op_menu == '2') //////////////////// CARDÁPIO
                {
                    tela_cardapio();
                    press_qualquer_tecla();
                }
                else if (op_menu == '3') //////////////////// RESERVAS
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
                            printf("\nSaindo do sistema...\n");
                            press_qualquer_tecla();
                        }
                        else
                        {
                            printf("\nOpção inválida! Tente novamente.\n");
                            printf("Pressione Enter para continuar...");
                            getchar();
                        }
                    }
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
            } // Fim do while op_menu
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
