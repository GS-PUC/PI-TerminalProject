#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "cesarcifrar.c"
#include "criar.c"
#include "ec.c"
#include "ajuda.c"

int main() {

    char command[30]; //Variável que receberá o comando utilizado pelo usuário | Tamanho arbitrário
    char parameter[30];

    //Loop for principal que recebe os comandos e chama suas respectivas funções
    for (int check_end = 0; check_end == 0;) {
        scanf("%29s", command); //Não é necessário &, pois um array já retorna um endereço


        //Escada de if-else porque implementação de switch-case com string não foi possível.
        if (strcmp(command, "help") == 0) {
           help();
        }else if (strcmp(command, "exit") == 0) {
            printf("Encerrando o processo.");
            return EXIT_SUCCESS; //Finaliza o programa com sucesso

        }else if (strcmp(command, "ec") == 0) {
            ec();
        }else if (strcmp(command, "create") == 0) {
            criar()

        }else if (strcmp(command, "cat") == 0) {

        }else if (strcmp(command, "caesar-encrypt") == 0) {
            int chave;
            char[] texto_limpo;
            scanf("Digite uma chave: ", &chave);

            CaesarEncrypt(command, chave);
        }else if (strcmp(command, "caesar-decrypt") == 0) {
            
        }else if (strcmp(command, "register") == 0) {

        }else if (strcmp(command, "login") == 0) {

        }else if (strcmp(command, "logout") == 0) {

        }else if (strcmp(command, "whoami") == 0) {

        }else if (strcmp(command, "encrypt") == 0) {

        }else if (strcmp(command, "decrypt") == 0) {

        }else {
            printf("Comando Invalido\n");
            continue;
        }
    }
}
