
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER_SIZE 4096
#define FILE_NAME_SIZE 1024

void catFunction()
{
    char filename[FILE_NAME_SIZE];
    FILE *file = NULL;

    // Continua solicitando até encontrar um arquivo válido
    //printf("Exemplo: C:\\Users\\User\\Dummy.txt\n> ");
    while (file == NULL)
    {
        // Solicita o caminho do arquivo ao usuário
        printf("\nDigite o caminho completo do arquivo:\ncat ");

        if (fgets(filename, sizeof(filename), stdin) == NULL) {
            printf("Erro ao ler o caminho do arquivo.\n");
            return;
        }

        // Verifica se a entrada ultrapassou o buffer
        if (strchr(filename, '\n') == NULL && !feof(stdin)) {
            int ch;

            // Descarta o restante da entrada
            while ((ch = getchar()) != '\n' && ch != EOF);

            printf("Erro: caminho muito longo. Tente novamente.\n");
            continue;
        }

        // Remove a quebra de linha deixada pelo fgets
        filename[strcspn(filename, "\n")] = '\0';


        // Remove aspas do começo e do fim do caminho
        size_t len = strlen(filename);

        if (len >= 2 && filename[0] == '"' && filename[len - 1] == '"') {
            filename[len - 1] = '\0';

        // Move o conteúdo uma posição para trás
        memmove(filename, filename + 1, len - 1);
        }

        // Verifica se o caminho está vazio
        if (filename[0] == '\0') {
            printf("Nenhum arquivo informado.\n");
            printf("O caminho do arquivo nao pode estar vazio.\n");
            continue;
        }

        // Abre o arquivo em modo de leitura
        file = fopen(filename, "r");

        if (file == NULL) {
            printf("Arquivo nao encontrado ou sem permissao de leitura.\n");
            printf("Verifique o caminho e tente novamente.\n");
        }
    }

    char buffer[MAX_BUFFER_SIZE];
    size_t bytesRead;

    printf("\n========== CONTEUDO DO ARQUIVO ==========\n\n");

    // Realiza a leitura em blocos
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0) {

        // Exibe o conteúdo lido
        if (fwrite(buffer, 1, bytesRead, stdout) != bytesRead) {
            fprintf(stderr, "\nErro ao exibir o conteudo do arquivo.\n");
            fclose(file);
            return;
        }
    }

    // Verifica erros durante a leitura
    if (ferror(file)) {
        perror("Erro durante a leitura");
    }

    // Fecha o arquivo
    fclose(file);

    printf("\n\n========== FIM DO ARQUIVO ==========\n");
}
