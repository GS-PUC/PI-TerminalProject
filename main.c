#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
    //Variável que receberá o comando utilizado pelo usuário | Tamanho arbitrário
    char command[30];
    //Loop for principal que recebe os comandos e chama suas respectivas funções
    for (int check_end = 0; check_end == 0;) {
        scanf("%s", command); //Não é necessário &, pois um array já retorna um endereço

        //Escada de if-else porque implementação de switch-case com string não foi possível.
        if (strcmp(command, "ajuda") == 0) {
            printf("Comandos\n|ajuda: abc\n|ec: abc\n|criar: abc\n|cat: abc\n|cesar cifrar: abc\n|cesar decifrar: abc\n|registrar: abc\n|login: abc|logout: abc\n|quem-sou: abc\n|<cifra> cifrar: abc\n|<cifra> decifrar: abc\n"); // Estrutura inicial do comando. Recomendável que seja inserido dentro de uma função.
        }else if (strcmp(command, "sair") == 0) {

        }else if (strcmp(command, "ec") == 0) {

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
            printf("Comando Invalido");
            continue;
        }
    }

    return EXIT_SUCCESS;

}
