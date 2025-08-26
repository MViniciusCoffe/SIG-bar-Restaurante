#include "pause.h"

// Bloco condicional de compilação (Só compila no windows)
#ifdef _WIN32
    // Biblioteca de rotinas de console
    #include <conio.h>
    void press_qualquer_tecla(void) {
        getch(); // Espera QUALQUER tecla
    }

#else
    #include <stdio.h>
    // Configurar o terminal
    #include <termios.h>
    // traz STDIN_FILENO (descritor de arquivo do stdin) e chamadas POSIX
    #include <unistd.h>
    void press_qualquer_tecla(void) {
        // oldt guardará a configuração atual do terminal, para restaurar depois;
        // newt será a configuração temporária que desativa o “precisar apertar ENTER”.
        struct termios oldt, newt;
        
        // pega configuração atual
        tcgetattr(STDIN_FILENO, &oldt);       
        newt = oldt;

        // Desliga duas flags no campo de “local modes” (c_lflag):
            // - ICANON: modo canônico (de linha). Desativar isso faz a leitura ser caractere a caractere (não precisa ENTER).
            // - ECHO: eco no terminal. Desligar evita que a tecla pressionada apareça na tela.
        newt.c_lflag &= ~(ICANON | ECHO);

        // Aplica a configuração
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);

        // Bloqueia até chegar um byte de entrada e lê esse byte.
        getchar();

        // restaura terminal
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt); 
    }

#endif
