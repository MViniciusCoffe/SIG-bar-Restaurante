#ifndef PEDIDOS
#define PEDIDOS

// Interfaces
void tela_pedidos(void);
void tela_itens_pedido(void);
void tela_adicionar_itens(void);
void tela_remover_itens(void);

// Lógica
void adicionar_itens(char op);
void remover_itens(void);
void finalizar_pedido(void);

// Navegação
void navegacao_pedidos(void);

#endif