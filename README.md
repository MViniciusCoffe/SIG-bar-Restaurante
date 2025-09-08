# SIG-bar-Restaurante
Um sistema para gerenciamento de um bar/restaurante

## Modelo do projeto
Telas principais:
1. Principal:
Contém os módulos principais do sistema, como:
    - 1.1 Pedidos Tela para criação e gerenciamento de pedidos, incluindo opções para adicionar itens, remover itens e finalizar pedidos.
    - 1.2 Cardápio: Tela para visualização e gerenciamento do cardápio, incluindo opções para adicionar, editar e remover itens do cardápio.
    - 1.3 Reserva: Tela para gerenciamento de reservas, incluindo opções para adicionar, editar e cancelar reservas.
    - 1.4 Relatórios: Tela para geração de relatórios, como vendas diárias, mensais e anuais.
2. Sobre:
    - Informações sobre o sistema, como versão, desenvolvedores e contato.
3. Equipe:
    - Informações sobre a equipe de desenvolvimento, incluindo nomes e funções.
4. Finalização:
    - Tela de finalização do sistema, com opções para sair ou reiniciar.

## como rodar 

### Pré-requisitos

Antes de começar, você precisa ter instalado no seu computador:

1. **Visual Studio Code (VS Code)** – [Download aqui](https://code.visualstudio.com/)
2. **GCC (compilador C)** – parte do pacote **MinGW** (no Windows) ou já vem instalado no Linux/Mac.
3. **Extensão "C/C++" da Microsoft no VS Code** – instale pela aba de extensões (`Ctrl+Shift+X` no VS Code).


### Passo a Passo para Compilar e Rodar

1. Abra o VS Code
Abra a pasta onde está o arquivo `sig_bar`.

2. Abra o Terminal no VS Code
Vá em **Terminal > Novo Terminal**
Ou pressione: `Ctrl + '` (crase)

3. Compile o programa

No terminal, digite o seguinte comando:

```
gcc main.c cardapio.c pedidos.c pause.c relatorios.c reservas.c telas.c -o sig_bar
```

Esse comando usa o `gcc` para compilar e gerar um executável chamado `sig_bar`.

4. Execute o programa

##### Se estiver no **Windows**, digite:

```bash
./sig_bar.exe
```

##### Se estiver no **Linux ou Mac**, digite:

```bash
./sig_bar
```

### Problemas comuns

| Problema                              | Solução                                                                                  |
| -----------------------------------   | ---------------------------------------------------------------------------------------- |
| `'gcc' não é reconhecido`             | O GCC não está instalado ou a variável de ambiente não foi configurada. Instale o MinGW. |
| `Permissão negada ao rodar ./sig_bar` | No Linux/Mac, talvez precise dar permissão: `chmod +x sig_bar`                           |
| Saída está errada                     | Verifique se o código foi salvo (`Ctrl+S`) antes de compilar.                            |


## To do
1. Mudança na lógica de realização de pedidos
2. Modularizar mais
3. Simplificar interface

