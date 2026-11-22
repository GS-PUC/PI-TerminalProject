#include <stdio.h>
#include <string.h>

// Le um texto e imprime de volta no terminal.
void ec(void) {

    char parameter[1024];

    // Recebe o texto digitado pelo usuario.
    if (fgets(parameter, sizeof(parameter), stdin) == NULL) {
        printf("Erro ao realizar a leitura.\n");
        return;
    }

    // Remove a quebra de linha armazenada pelo fgets.
    parameter[strcspn(parameter, "\r\n")] = '\0';

    // Imprime o texto recebido.
    printf("%s\n", parameter);

}
