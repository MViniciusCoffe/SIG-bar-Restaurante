#include "telas.h"

void tela_gestao(void) {
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                           SISTEMA SIG-BAR                                ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                         >>> TELA DE GESTÃO <<<                           ║\n");
    printf("║                                                                          ║\n");
    printf("║   1. Menu Principal                                                      ║\n");
    printf("║   2. Sobre                                                               ║\n");
    printf("║   3. Equipe                                                              ║\n");
    printf("║   0. Sair                                                                ║\n");
    printf("║                                                                          ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
}

void tela_menu_principal(void) {
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                           SISTEMA SIG-BAR                                ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                         >>> MENU PRINCIPAL <<<                           ║\n");
    printf("║                                                                          ║\n");
    printf("║   1. Pedidos      - Criar e gerenciar pedidos                            ║\n");
    printf("║   2. Cardápio     - Visualizar cardápio                                  ║\n");
    printf("║   3. Reservas     - Gerenciar reservas                                   ║\n");
    printf("║   4. Relatórios   - Gerar relatórios de vendas                           ║\n");
    printf("║   0. Voltar para tela de gestão                                          ║\n");
    printf("║                                                                          ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
}

void tela_pedidos(void) {
    char op = ' ';

    while (op != '0') {
        system("clear||cls");
        printf("\n");
        printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
        printf("║                           SISTEMA SIG-BAR                                ║\n");
        printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
        printf("║                          >>> PEDIDOS <<<                                 ║\n");
        printf("║                                                                          ║\n");
        printf("║   1. Adicionar itens ao pedido                                           ║\n");
        printf("║   2. Remover itens do pedido                                             ║\n");
        printf("║   3. Finalizar pedido                                                    ║\n");
        printf("║   0. Voltar ao menu anterior                                             ║\n");
        printf("║                                                                          ║\n");
        printf("╚══════════════════════════════════════════════════════════════════════════╝\n");

        printf("\nDigite a opção desejada: ");
        op = getchar();
        getchar();

        if (op == '1') {
            printf("\n>>> Adicionar itens (função ainda não implementada).\n");
        } else if (op == '2') {
            printf("\n>>> Remover itens (função ainda não implementada).\n");
        } else if (op == '3') {
            printf("\n>>> Finalizar pedido (função ainda não implementada).\n");
        } else if (op == '0') {
            printf("\n>>> Retornando ao menu anterior...\n");
        } else {
            printf("\n>>> Opção inválida! Tente novamente.\n");
        }

        printf("\nPressione <ENTER> para continuar...\n");
        getchar();
    }
}

void tela_cardapio(void) {
    system("clear||cls");
    printf("\n");
    printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                           SISTEMA SIG-BAR                                ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
    printf("║                          >>> CARDÁPIO <<<                                ║\n");
    printf("║                                                                          ║\n");
    printf("║   - 01. Cerveja Pilsen 600ml ......................... R$ 9,00           ║\n");
    printf("║   - 02. Refrigerante Lata 350ml ...................... R$ 5,00           ║\n");
    printf("║   - 03. Água com Gás 500ml ............................ R$ 4,00          ║\n");
    printf("║   - 04. Porção de Batata Frita ........................ R$ 18,00         ║\n");
    printf("║   - 05. Isca de Peixe .................................. R$ 28,00        ║\n");
    printf("║   - 06. Pastel de Carne (Unidade) ..................... R$ 6,00          ║\n");
    printf("║   - 07. Caipirinha de Limão ............................ R$ 12,00        ║\n");
    printf("║                                                                          ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
    printf("\n\t\t>>> Pressione <ENTER> para continuar...\n");
    getchar();
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