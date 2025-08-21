#include <stdio.h>
#include <stdlib.h>
#include "telas.c"
#include "pedidos.c"

void relatorio_do_dia(void);
void relatorio_do_mes(void);
void relatorio_do_ano(void);

int main(void) {
    char op = ' ';

    while (op != '0') {
        system("clear||cls"); 
        tela_gestao();

        printf("\nDigite a opção desejada: "); 
        op = getchar(); 
        getchar();  // Limpa '\n'

        if (op == '1') {
            char op_menu = ' ';
            while (op_menu != '0') {
                system("clear||cls");
                tela_menu_principal();

                printf("\nDigite a opção desejada: ");
                op_menu = getchar();
                getchar();

                if (op_menu == '1') {
                    tela_pedidos();
                } else if (op_menu == '2') {
                    tela_cardapio();
                } else if (op_menu == '3') {
                    tela_reservas();
                } else if (op_menu == '4') {
                    tela_relatorios();
                } else if (op_menu == '0') {
                    // Voltar para tela de gestão
                } else {
                    printf("\n>>> Opção inválida! Tente novamente.\n");
                    printf("\nPressione <ENTER> para continuar...\n");
                    getchar();
                }
            }
        } else if (op == '2') {
            tela_sobre();
        } else if (op == '3') {
            tela_equipe();
        } else if (op == '0') {
            tela_finalizacao();
        } else {
            printf("\n>>> Opção inválida! Tente novamente.\n");
            printf("\nPressione <ENTER> para continuar...\n");
            getchar();
        }
    }

    return 0;
}

// Implementar depois
void relatorio_vendas_dia(void) {
    system("clear||cls");
    printf("\n>>> RELATÓRIO DE VENDAS DO DIA <<<\n\n");
    printf("- Total de vendas: R$ 1.250,00\n");
    printf("- Total de pedidos: 45\n");
    printf("- Média por pedido: R$ 27,78\n");
}

void relatorio_mais_vendidos(void) {
    system("clear||cls");
    printf("\n>>> RELATÓRIO DE ITENS MAIS VENDIDOS <<<\n\n");
    printf("1. Prato Executivo .......... 15 unidades\n");
    printf("2. Refrigerante Lata ........ 12 unidades\n");
    printf("3. Brownie com Sorvete ...... 9 unidades\n");
}

void relatorio_reservas(void) {
    system("clear||cls");
    printf("\n>>> RELATÓRIO DE RESERVAS <<<\n\n");
    printf("- Total de reservas hoje: 12\n");
    printf("- Mesas ocupadas: 8\n");
    printf("- Mesas disponíveis: 4\n");
}
