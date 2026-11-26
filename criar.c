#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criar(){
    char nome[51], texto[10000];
    FILE *arquivo; // ponteiro usado para manipular o arquivo

    do {
        //solicita o nome do arquivo
        printf("Digite o nome do arquivo (nome_do_arquivo.txt): ");
        //stdin indica que a entrada será recebida pelo teclado
        if (fgets(nome, sizeof(nome), stdin) == NULL) { // Se fgets() retornar NULL, significa que a leitura falhou ou a entrada terminou.
            printf("Entrada encerrada.\n");
            return;
        }

        //retira o Enter deixado no final da entrada
        nome[strcspn(nome, "\n")] = '\0'; //também faz com que aceite uma string em branco

        /*verifica se o nome está vazio ou se contem '/' ou '\' */
        if (strlen(nome) == 0 || strlen(nome) > 50 || strchr(nome, '/') != NULL || strchr(nome, '\\') != NULL || strchr(nome, ' ') != NULL || strlen(nome) < 4 || strcmp(nome + strlen(nome) - 4, ".txt") != 0) {
            printf("Nome invalido! Tente novamente.\nO nome do arquivo nao deve estar vazio, nao pode conter os caracteres '/' ou '\\' e nem espacos em branco. \nTambem nao deve conter mais que 50 caracteres e deve terminar com .txt\n");
        }
    } while (strlen(nome) == 0 || strlen(nome) > 50 || strchr(nome, '/') != NULL || strchr(nome, '\\') != NULL || strchr(nome, ' ') != NULL || strlen(nome) < 4 || strcmp(nome + strlen(nome) - 4, ".txt") != 0);

    //solicitar conteudo do arquivo
    printf("Digite o conteúdo do arquivo.\nDigite /fim para finalizar: ");
    // Inicializa a string vazia.
    // Isso e necessario para que strcat() possa adicionar conteudo corretamente.
    texto[0] = '\0';
    // O while (1) cria um laco que continua ate encontrar um break ou return.
    while (1){
        char linha[1000];
        if (fgets(linha, sizeof(linha), stdin) == NULL) {
            printf("Entrada encerrada.\n");
            return;
        }

        // strcmp() compara a linha digitada com o comando /fim.
        // Se forem iguais, break interrompe o laco de leitura.
        // As duas comparacoes permitem reconhecer a linha com ou sem '\n'.
        if (strcmp(linha, "/fim\n") == 0 || strcmp(linha, "/fim") == 0) {
            break;
        }

        // strlen() calcula o tamanho do conteudo atual e da nova linha.
        // sizeof(texto) retorna a capacidade total do vetor (10000 bytes).
        // Essa verificacao impede que a concatenacao ultrapasse o limite do vetor.
        if (strlen(texto) + strlen(linha) >= sizeof(texto)) {
            printf("Limite de conteudo atingido!\n");
            return;
        }

        // strcat() concatena (junta) uma string ao final de outra.
        // Assim, cada nova linha digitada e adicionada ao conteudo anterior.
        strcat(texto, linha);
    }

    //criar o arquivo no modo escrita
    // O modo "wx" significa criacao exclusiva:
    // - Cria o arquivo se ele ainda nao existir.
    // - Retorna NULL se o arquivo ja existir.
    // - Evita apagar o conteudo de um arquivo existente.
    arquivo = fopen(nome, "wx");

    //verificar se houve uma falha na abertura
    if(arquivo == NULL){
        printf("Erro ao criar o arquivo.\nJa pode existir um arquivo com esse nome ou voce pode nao ter permissao para cria-lo.");
        return;
    }

    //escrever o conteúdo do arquivo
    if(fputs(texto, arquivo) == EOF){              // EOF significa End Of File, é uma constante utilizada
        printf("Erro ao escrever no arquivo.\n");  // para indicar que uma operação de leitura chegou ao fim
        fclose(arquivo);                           // da entrada ou encontrou uma condição que impediu a leitura
        return;
    }
    
    //fechar o arquivo
    if (fclose(arquivo) == EOF) {
        printf("Erro ao fechar o arquivo.\n");
        return;
    }

    //informar o resultado ao usuário
    printf("Arquivo criado com sucesso!\n");
}
