#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criar(){
    char nome[100], texto[10000];
    FILE *arquivo;

    do {
        //solicita o nome do arquivo
        printf("Digite o nome do arquivo (nome_do_arquivo.txt): ");
        fgets(nome, sizeof(nome), stdin);

        //retira o Enter deixado no final da entrada
        nome[strcspn(nome, "\n")] = '\0'; //também faz com que aceite uma string em branco

        /*verifica se o nome está vazio ou se contem '/' ou '\' */
        if (strlen(nome) == 0 || strlen(nome) > 50 || strchr(nome, '/') != NULL || strchr(nome, '\\') != NULL || strchr(nome, ' ') != NULL) {
            printf("Nome invalido! Tente novamente.\nO nome do arquivo nao deve estar vazio, nao pode conter os caracteres '/' ou '\\' e nem espacos em branco. Tambem nao deve conter mais que 50 caracteres.\n");
        }
    } while (strlen(nome) == 0 || strchr(nome, '/') != NULL || strchr(nome, '\\') != NULL || strchr(nome, ' ') != NULL);

    //solicitar conteudo do arquivo
    printf("Digite o conteúdo do arquivo:");
    fgets(texto, sizeof(texto), stdin); //stdin indica que a entrada será recebida pelo teclado

    //criar o arquivo no modo escrita
    arquivo = fopen(nome, "w");

    //verificar se houve uma falha na abertura
    if(arquivo == NULL){
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    //escrever o conteúdo do arquivo
    if(fputs(texto, arquivo) == EOF){
        printf("Erro ao escrever no arquivo.\n");
        fclose(arquivo);
        return;
    }
    
    //fechar o arquivo
    fclose(arquivo);

    //informar o resultado ao usuário
    printf("Arquivo criado com sucesso!\n");
}

/*int main(){
    criar();

    return EXIT_SUCCESS;
}*/