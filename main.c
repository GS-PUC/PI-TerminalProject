#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cesarcifrar.c"
#include "criar.c"
#include "ec.c"
#include "ajuda.c"
#include "catFunction.c"

int main() {

    char command[30];
    char input[256];

    // Loop principal: recebe os comandos e chama suas respectivas funções.
    while (1) {

        printf("\n> ");

        // Recebe o comando digitado pelo usuário.
        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("\nEncerrando o programa.\n");
            return EXIT_SUCCESS;
        }

        // Remove a quebra de linha.
        input[strcspn(input, "\r\n")] = '\0';

        // Ignora entradas vazias.
        if (input[0] == '\0') {
            continue;
        }

        // Extrai o primeiro comando da entrada.
        if (sscanf(input, "%29s", command) != 1) {
            continue;
        }

        // Verifica qual comando foi utilizado.
        if (strcmp(command, "help") == 0) {

            help();

        } else if (strcmp(command, "exit") == 0) {

            printf("Encerrando o processo.\n");
            return EXIT_SUCCESS;

        } else if (strcmp(command, "ec") == 0) {

            ec();

        } else if (strcmp(command, "create") == 0) {

            criar();

        } else if (strcmp(command, "cat") == 0) {

            catFunction();

        } else if (strcmp(command, "caesar-encrypt") == 0) {

            CaesarEncrypt();

        } else if (strcmp(command, "caesar-decrypt") == 0) {

            CaesarDecrypt();

        } else if (strcmp(command, "register") == 0) {

            printf("Comando ainda nao implementado.\n");

        } else if (strcmp(command, "login") == 0) {

            printf("Comando ainda nao implementado.\n");

        } else if (strcmp(command, "logout") == 0) {

            printf("Comando ainda nao implementado.\n");

        } else if (strcmp(command, "whoami") == 0) {

            printf("Comando ainda nao implementado.\n");

        } else if (strcmp(command, "encrypt") == 0) {

            printf("Comando ainda nao implementado.\n");

        } else if (strcmp(command, "decrypt") == 0) {

            printf("Comando ainda nao implementado.\n");

        } else {

            printf("Comando invalido. Digite 'help' para consultar os comandos.\n");

        }
    }

    return EXIT_SUCCESS;
}
