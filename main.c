#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void  ajuda();
void ec();

int main() {

    char command[30]; //Variável que receberá o comando utilizado pelo usuário | Tamanho arbitrário
    char parameter[30];

    //Loop for principal que recebe os comandos e chama suas respectivas funções
    for (int check_end = 0; check_end == 0;) {
        scanf("%29s", command); //Não é necessário &, pois um array já retorna um endereço


        //Escada de if-else porque implementação de switch-case com string não foi possível.
        if (strcmp(command, "ajuda") == 0) {
           ajuda();
        }else if (strcmp(command, "sair") == 0) {
            printf("Encerrando o processo.");
            return EXIT_SUCCESS; //Finaliza o programa com sucesso

        }else if (strcmp(command, "ec") == 0) {
            ec();
        }else if (strcmp(command, "criar") == 0) {

        }else if (strcmp(command, "cat") == 0) {

        }else if (strcmp(command, "cesar cifrar") == 0) {

        }else if (strcmp(command, "cesar decifrar") == 0) {

        }else if (strcmp(command, "registrar") == 0) {

        }else if (strcmp(command, "login") == 0) {

        }else if (strcmp(command, "logout") == 0) {

        }else if (strcmp(command, "quem-sou") == 0) {

        }else if (strcmp(command, "<cifra> cifrar") == 0) {

        }else if (strcmp(command, "<cifra> decifrar") == 0) {

        }else {
            printf("Comando Invalido\n");
            continue;
        }
    }
}

void ajuda() { //Incompleto - Deve conter informações sobre todos os comandos
     printf("Comandos\n|ajuda: Imprime todos os comandos previstos no programa e seus usos.\n|sair: Encerra o programa.\n|ec <texto>: Le e imprime de volta o texto inserido.\n|criar: abc\n|cat: abc\n|cesar cifrar: abc\n|cesar decifrar: abc\n|registrar: abc\n|login: abc|logout: abc\n|quem-sou: abc\n|<cifra> cifrar: abc\n|<cifra> decifrar: abc\n");
     return;
}

void ec() { //Incompleto - Deve ser capaz de ler um texto inteiro, ignorando espaços.
    char parameter[30];
    scanf("%29s", parameter);
    printf("%s\n", parameter);
    return;
}
