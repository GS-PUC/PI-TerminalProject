#include <stdio.h>

// Exibe os comandos disponiveis no terminal.
void help(void) {

    printf("\n");
    printf("========== COMANDOS DISPONIVEIS ==========\n\n");

    printf("help\n");
    printf("  Exibe a lista de comandos disponiveis.\n\n");

    printf("exit\n");
    printf("  Encerra o programa.\n\n");

    printf("ec\n");
    printf("  Le um texto e imprime o conteudo inserido.\n\n");

    printf("create\n");
    printf("  Cria um arquivo. A funcao solicita as informacoes necessarias.\n\n");

    printf("cat\n");
    printf("  Exibe no terminal o conteudo de um arquivo.\n\n");

    printf("caesar-encrypt\n");
    printf("  Cifra um texto utilizando a Cifra de Cesar.\n\n");

    printf("caesar-decrypt\n");
    printf("  Decifra um texto utilizando a Cifra de Cesar.\n\n");

    printf("register\n");
    printf("  [WIP] Realiza o cadastro de um usuario.\n\n");

    printf("login\n");
    printf("  [WIP] Realiza o login de um usuario.\n\n");

    printf("logout\n");
    printf("  [WIP] Encerra a sessao do usuario.\n\n");

    printf("whoami\n");
    printf("  [WIP] Exibe o usuario atualmente autenticado.\n\n");

    printf("encrypt\n");
    printf("  [WIP] Cifra um arquivo utilizando uma cifra selecionada.\n\n");

    printf("decrypt\n");
    printf("  [WIP] Decifra um arquivo utilizando uma cifra selecionada.\n\n");

    printf("==========================================\n\n");

}
