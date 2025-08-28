void tela_reservas(void)
{
    char op = ' ';

    while (op != '0')
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

        printf("\nDigite a opção desejada: ");
        op = getchar();
        getchar();

        if (op == '1')
        {
            printf("\n>>> Criar reserva (função ainda não implementada).\n");
        }
        else if (op == '2')
        {
            printf("\n>>> Cancelar reserva (função ainda não implementada).\n");
        }
        else if (op == '3')
        {
            printf("\n>>> Listar reservas (função ainda não implementada).\n");
        }
        else if (op == '0')
        {
            printf("\n>>> Retornando ao menu anterior...\n");
        }
        else
        {
            printf("\n>>> Opção inválida! Tente novamente.\n");
        }

        if (op != '0')
        {
            printf("\nPressione <ENTER> para continuar...\n");
            getchar();
        }
    }
}