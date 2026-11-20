#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024

void catFunction()
{
    char filename[MAX]; //Variável que recebe o caminho completo do arquivo
    int caractere; //Caractere que vai armazenar todas a letras do texto do documento
    
    // Solicita o caminho do arquivo ao usuário
    printf("Digite o caminho completo do arquivo:\n(não use caracteres especiais)\n");
    //printf("Exemplo: C:\\Users\\User\\Dummy.txt\n> ");
    
    while(fgets(filename, sizeof(filename), stdin) == NULL)
    {
        fprintf(stderr, "Erro ao ler o caminho do arquivo (não use caracteres especiais).\n"); //Se o arquivo  estiver com algum problema, será detectado aqui
        return;
    }
    
    filename[strcspn(filename, "\n")] = '\0'; // Remove a quebra de linha

        if (filename[0] == '\0')
    {
        fprintf(stderr, "O caminho do arquivo nao pode estar vazio.\n"); // Garante que o caminho nunca fique vazio
        return;
    }
    
       
    FILE *file = fopen(filename, "r"); // Abre o arquivo em modo de leitura

    if (file == NULL)
    {
         printf("Erro ao abrir o arquivo '%s'! Tente novamente!\n", filename); // Caso acontecça algo durante a abertura do arquivo, o programa não vai quebrar. 
        return;
    }

printf("\n========== CONTEUDO DO ARQUIVO ==========\n\n");
    
    while ((caractere = fgetc(file)) != EOF) // O While vai ficar em execução até chegar no ultimo caractere contido no arquivo
    {
        putchar(caractere); //exibirá caractere por caractere na tela
    }
        if (ferror(file))
    {
        fprintf(stderr, "\nErro durante a leitura do arquivo.\n"); // Caso acontecça algo durante a exibição do arquivo, o programa não vai quebrar
    }

    fclose(file); //fechará o arquivo
     printf("\n\n========== FIM DO ARQUIVO ==========\n");
}

int main(){
    catFunction();
}
