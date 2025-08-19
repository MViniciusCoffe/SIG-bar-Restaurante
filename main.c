#include <stdio.h>
#include <stdlib.h>
#include "telas.c"
#include "pedidos.c"


void relatorio_do_dia(void);
void relatorio_do_mes(void);
void relatorio_do_ano(void);

#include "telas.c"

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

void tela_reservas(void) {
    system("clear||cls");
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                           SISTEMA SIG-BAR                                ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                          >>> RESERVAS <<<                                ║\n");
    printf("║                                                                          ║\n");
    printf("║   - Adicionar nova reserva                                               ║\n");
    printf("║   - Editar reserva existente                                             ║\n");
    printf("║   - Cancelar reserva                                                     ║\n");
    printf("║                                                                          ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
    printf("\n\t\t>>> Pressione <ENTER> para continuar...\n");
    getchar();
}

void tela_relatorios(void) {
    system("clear||cls");
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                           SISTEMA SIG-BAR                                ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                         >>> RELATÓRIOS <<<                               ║\n");
    printf("║                                                                          ║\n");
    printf("║   - Relatório de vendas diárias                                          ║\n");
    printf("║   - Relatório de vendas mensais                                          ║\n");
    printf("║   - Relatório de vendas anuais                                           ║\n");
    printf("║                                                                          ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
    printf("\n\t\t>>> Pressione <ENTER> para continuar...\n");
    getchar();
}

void tela_sobre(void) {
    system("clear||cls");
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                           SISTEMA SIG-BAR                                ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                              >>> SOBRE <<<                               ║\n");
    printf("║ Sistema de gerenciamento para bares e restaurantes, desenvolvido por     ║\n");
    printf("║ Marcus Vinicius de Souza Azevedo e Luís Felipe Linhares Pereira, alunos  ║\n");
    printf("║ do curso de Sistemas de Informação da UFRN - CERES Caicó.                ║\n");
    printf("║                                                                          ║\n");
    printf("║ O SIG-BAR busca otimizar o controle de pedidos, mesas, produtos e caixa  ║\n");
    printf("║ de forma prática e eficiente, auxiliando a gestão do estabelecimento.    ║\n");
    printf("║                                                                          ║\n");
    printf("║ Projeto acadêmico com foco em usabilidade, organização e desempenho.     ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
    printf("\n\t\t>>> Pressione <ENTER> para continuar...\n");
    getchar();
}

void tela_equipe(void) {
    system("clear||cls");
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                           SISTEMA SIG-BAR                                ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                         >>> EQUIPE TÉCNICA <<<                           ║\n");
    printf("║ Marcus Vinicius de Souza Azevedo                                         ║\n");
    printf("║ Email: nfobasicifrn2017marcusv@gmail.com                                 ║\n");
    printf("║                                                                          ║\n");
    printf("║ Luís Felipe Linhares Pereira                                             ║\n");
    printf("║ Email: uis.felipe.linhares.701@ufrn.edu.br                               ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
    printf("\n\t\t>>> Pressione <ENTER> para continuar...\n");
    getchar();
}

void tela_finalizacao(void) {
    system("clear||cls");
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                           SISTEMA SIG-BAR                                ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                          >>> ENCERRAMENTO <<<                            ║\n");
    printf("║                                                                          ║\n");
    printf("║             Obrigado por utilizar o SIG-BAR. Até a próxima!              ║\n");
    printf("║                                                                          ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
    printf("\n\t\t>>> Pressione <ENTER> para sair...\n");
    getchar();
}