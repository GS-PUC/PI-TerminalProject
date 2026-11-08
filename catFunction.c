#include <stdio.h>

void catFunction(const char *filename)  //Função recebe o caminho completo do arquivo desejado.
{
    FILE *file; //Ponteiro para a estrutura C
    int caractere; //Caractere que vai armazenar todas a letras do texto do documento

    file = fopen(filename, "r"); //Função que vai abrir e realizar a leitura do arquivo

    if (file == NULL) //Se o arquivo estiver com algum problema, será detectado aqui
    {
        printf("Erro ao abrir o arquivo '%s'! Tente novamente!\n", filename);
        return;
    }

    
    while ((caractere = fgetc(file)) != EOF) // O While vai ficar em execução até chegar no ultimo caractere contido no arquivo
    {
        putchar(caractere); //exibirá caractere por caractere na tela
    }

    fclose(file); //fechará o arquivo
}

//int main(){
//    catFunction("C:\\Users\\jbolo\\OneDrive\\Desktop\\PI Project\\Dummy.txt");
//    return 0;
//}


