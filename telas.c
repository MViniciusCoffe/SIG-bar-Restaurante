#include "telas.h"
#include "pause.h"

void tela_gestao(void) {
    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════════════════╗\n");
    printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                     ║\n");
    printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                     ║\n");
    printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                     ║\n");
    printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                     ║\n");
    printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                     ║\n");
    printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                     ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════╣\n");
    printf("║                         >>> TELA DE GESTÃO <<<                        ║\n");
    printf("║                                                                       ║\n");
    printf("║   1. Menu Principal                                                   ║\n");
    printf("║   2. Sobre                                                            ║\n");
    printf("║   3. Equipe                                                           ║\n");
    printf("║   0. Sair                                                             ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}

void tela_menu_principal(void) {
    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════════════════╗\n");
    printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                     ║\n");
    printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                     ║\n");
    printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                     ║\n");
    printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                     ║\n");
    printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                     ║\n");
    printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                     ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════╣\n");
    printf("║                         >>> MENU PRINCIPAL <<<                        ║\n");
    printf("║                                                                       ║\n");
    printf("║   1. Pedidos      - Criar e gerenciar pedidos                         ║\n");
    printf("║   2. Cardápio     - Visualizar cardápio                               ║\n");
    printf("║   3. Reservas     - Gerenciar reservas                                ║\n");
    printf("║   4. Relatórios   - Gerar relatórios de vendas                        ║\n");
    printf("║   0. Voltar para tela de gestão                                       ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}


void tela_cardapio(void) {
    char op = ' ';

    while (op != '0') { 
        system("clear||cls");
        printf("\n");
        printf("╔══════════════════════════════════════════════════════════════════════════╗\n");
        printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                        ║\n");
        printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                        ║\n");
        printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                        ║\n");
        printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                        ║\n");
        printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                        ║\n");
        printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                        ║\n");
        printf("╠══════════════════════════════════════════════════════════════════════════╣\n");
        printf("║                             >>> CARDÁPIO <<<                             ║\n");
        printf("║                                                                          ║\n");
        printf("║   1. Pratos                                                              ║\n");
        printf("║   2. Bebidas                                                             ║\n");
        printf("║   3. Sobremesas                                                          ║\n");
        printf("║   0. Voltar ao menu anterior                                             ║\n");
        printf("║                                                                          ║\n");
        printf("╚══════════════════════════════════════════════════════════════════════════╝\n");
        printf("\nDigite a opção desejada: ");
        op = getchar();
        getchar(); // limpa o enter

        if (op == '1') {
            system("clear||cls");
            printf("\n");
            printf("╔══════════════════════════════════════════════════════════════════════╗\n");
            printf("║                             >>> PRATOS <<<                           ║\n");
            printf("╠══════════════════════════════════════════════════════════════════════╣\n");
            printf("║  1. Prato Executivo......................... R$ 25,00                ║\n");
            printf("║  2. Lasanha de Frango....................... R$ 28,00                ║\n");
            printf("║  3. Feijoada Completa....................... R$ 30,00                ║\n");
            printf("╚══════════════════════════════════════════════════════════════════════╝\n");
            printf("\nPressione <ENTER> para voltar...\n");
            getchar();

        } else if (op == '2') {
            system("clear||cls");
            printf("\n");
            printf("╔══════════════════════════════════════════════════════════════════════╗\n");
            printf("║                            >>> BEBIDAS <<<                           ║\n");
            printf("╠══════════════════════════════════════════════════════════════════════╣\n");
            printf("║  1. Refrigerante Lata...................... R$ 5,00                  ║\n");
            printf("║  2. Água Mineral........................... R$ 3,00                  ║\n");
            printf("║  3. Suco Natural........................... R$ 7,00                  ║\n");
            printf("╚══════════════════════════════════════════════════════════════════════╝\n");
            printf("\nPressione <ENTER> para voltar...\n");
            getchar();

        } else if (op == '3') {
            system("clear||cls");
            printf("\n");
            printf("╔══════════════════════════════════════════════════════════════════════╗\n");
            printf("║                           >>> SOBREMESAS <<<                         ║\n");
            printf("╠══════════════════════════════════════════════════════════════════════╣\n");
            printf("║  1. Pudim de Leite......................... R$ 10,00                 ║\n");
            printf("║  2. Mousse de Maracujá..................... R$ 9,00                  ║\n");
            printf("║  3. Brownie com Sorvete.................... R$ 12,00                 ║\n");
            printf("╚══════════════════════════════════════════════════════════════════════╝\n");
            printf("\nPressione <ENTER> para voltar...\n");
            getchar();

        } else if (op == '0') {
            // Volta a gestao
        } else {
            printf("\n>>> Opção inválida! Tente novamente.\n");
            printf("\nPressione <ENTER> para continuar...\n");
            getchar();
        }
    }
}

void tela_reservas(void) {
    char op = ' ';

    while (op != '0') {
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

        printf("\nDigite a opção desejada: ");
        op = getchar();
        getchar();

        if (op == '1') {
            printf("\n>>> Criar reserva (função ainda não implementada).\n");
        } else if (op == '2') {
            printf("\n>>> Cancelar reserva (função ainda não implementada).\n");
        } else if (op == '3') {
            printf("\n>>> Listar reservas (função ainda não implementada).\n");
        } else if (op == '0') {
            printf("\n>>> Retornando ao menu anterior...\n");
        } else {
            printf("\n>>> Opção inválida! Tente novamente.\n");
        }

        if (op != '0') {
            printf("\nPressione <ENTER> para continuar...\n");
            getchar();
        }
    }
}


void tela_relatorios(void) {
    char op = ' ';

    while (op != '0'){
        system("clear||cls");
        printf("\n");
        printf("╔═══════════════════════════════════════════════════════════════════════╗\n");
        printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                     ║\n");
        printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                     ║\n");
        printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                     ║\n");
        printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                     ║\n");
        printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                     ║\n");
        printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                     ║\n");
        printf("╠═══════════════════════════════════════════════════════════════════════╣\n");
        printf("║                        >>> RELATÓRIOS <<<                             ║\n");
        printf("║                                                                       ║\n");
        printf("║     1- Relatorio do dia                                               ║\n");
        printf("║     2- Relatorio do mensal                                            ║\n");
        printf("║     3- Relatorio anual                                                ║\n");
        printf("║     0- Voltar ao menu principal                                       ║\n");
        printf("║                                                                       ║\n");
        printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
        op = getchar();
        getchar();

        if (op == '1') {
            system("clear||cls");
            printf("\n>>> RELATÓRIO DE VENDAS DO DIA <<<\n\n");
            printf("- Total de vendas: R$ 1.250,00\n");
            printf("- Total de pedidos: 45\n");
            printf("- Média por pedido: R$ 27,78\n");
            printf("\nPressione <ENTER> para continuar...\n");
            getchar();
        } else if (op == '2') {
            system("clear||cls");
            printf("\n>>> RELATÓRIO DE ITENS MAIS VENDIDOS <<<\n\n");
            printf("1. Prato Executivo .......... 15 unidades\n");
            printf("2. Refrigerante Lata ........ 12 unidades\n");
            printf("3. Brownie com Sorvete ...... 9 unidades\n");
            printf("\nPressione <ENTER> para continuar...\n");
            getchar();
        } else if (op == '3') {
            system("clear||cls");
            printf("\n>>> RELATÓRIO DE RESERVAS <<<\n\n");
            printf("- Total de reservas hoje: 12\n");
            printf("- Mesas ocupadas: 8\n");
            printf("- Mesas disponíveis: 4\n");
            printf("\nPressione <ENTER> para continuar...\n");
            getchar();
        } else if (op == '0') {
            printf("\n>>> Retornando ao menu anterior...\n");
        } else {
            printf("\n>>> Opção inválida! Tente novamente.\n");
            printf("\nPressione <ENTER> para continuar...\n");
            getchar();
        }
    }
}

void tela_sobre(void) {
    system("clear||cls");
    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════════════════╗\n");
    printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                     ║\n");
    printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                     ║\n");
    printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                     ║\n");
    printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                     ║\n");
    printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                     ║\n");
    printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                     ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════╣\n");
    printf("║                             >>> SOBRE <<<                             ║\n");
    printf("║                                                                       ║\n");
    printf("║   Sistema de gestão para bar e restaurante, criado pelos alunos       ║\n");
    printf("║ Marcus Vinícius e Luis Felipe, do curso de Sistemas de Informação     ║\n");
    printf("║    da UFRN - Campus CERES Caicó. Projeto desenvolvido com fins        ║\n");
    printf("║               educacionais e acadêmicos.                              ║\n");
    printf("║                                                                       ║\n");
    printf("║              Pressione qualquer tecla para voltar...                  ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}

void tela_equipe(void) {
    system("clear||cls");
    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════════════════╗\n");
    printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                     ║\n");
    printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                     ║\n");
    printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                     ║\n");
    printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                     ║\n");
    printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                     ║\n");
    printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                     ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════╣\n");
    printf("║                          >>> EQUIPE <<<                               ║\n");
    printf("║                                                                       ║\n");
    printf("║  - MARCUS VINICIUS DE SOUZA AZEVEDO                                   ║\n");
    printf("║   Email: infobasicifrn2017marcusv@gmail.com                           ║\n");
    printf("║                                                                       ║\n");
    printf("║  -LUÍS FELIPE LINHARES PEREIRA                                        ║\n");
    printf("║   Email:luis.felipe.linhares.701@ufrn.edu.br                          ║\n");
    printf("║                                                                       ║\n");
    printf("║             Pressione qualquer tecla para voltar...                   ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}

void tela_finalizacao(void) {
    system("clear||cls");
    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════════════════╗\n");
    printf("║    ░██████╗██╗░██████╗░  ██████╗░░█████╗░██████╗░                     ║\n");
    printf("║    ██╔════╝██║██╔════╝░  ██╔══██╗██╔══██╗██╔══██╗                     ║\n");
    printf("║    ╚█████╗░██║██║░░██╗░  ██████╦╝███████║██████╔╝                     ║\n");
    printf("║    ░╚═══██╗██║██║░░╚██╗  ██╔══██╗██╔══██║██╔══██╗                     ║\n");
    printf("║    ██████╔╝██║╚██████╔╝  ██████╦╝██║░░██║██║░░██║                     ║\n");
    printf("║    ╚═════╝░╚═╝░╚═════╝░  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝                     ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════╣\n");
    printf("║                        >>> ENCERRAMENTO <<<                           ║\n");
    printf("║                                                                       ║\n");
    printf("║         Obrigado por utilizar o SIG-BAR. Até a próxima!               ║\n");
    printf("║                                                                       ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════╝\n");
}
