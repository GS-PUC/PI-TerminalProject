#include <ctype.h>
#include <stdio.h>
#include <string.h>

void CaesarEncrypt(void){
    int chave;
    char texto[100];

    printf("Digite a frase que gostaria de criptografar: ");
    if (fgets(texto, sizeof(texto), stdin) == NULL) {
        printf("Entrada invalida.\n");
        return;
    }
    texto[strcspn(texto, "\n")] = '\0';  // remove o '\n' do fgets

    printf("Qual chave gostaria de usar? ");
    if (scanf("%d", &chave) != 1) {
        printf("Chave invalida.\n");
        return;
    }
    int c;
    while ((c = getchar()) != '\n' && c != EOF);  // descarta o '\n' deixado pelo scanf

    chave = ((chave % 26) + 26) % 26;  // normaliza (aceita chave negativa)

    for (int i = 0; texto[i] != '\0'; i++) { // criptografa com a chave
        if (isupper((unsigned char)texto[i])) {
            texto[i] = 'A' + (texto[i] - 'A' + chave) % 26;
        } else if (islower((unsigned char)texto[i])) {
            texto[i] = 'a' + (texto[i] - 'a' + chave) % 26;
        }
    }

    printf("Texto criptografado: %s\n", texto);
}

void CaesarDecrypt(void){
    int chave;
    char texto[100];

    printf("Digite a frase que gostaria de descriptografar: ");
    if (fgets(texto, sizeof(texto), stdin) == NULL) {
        printf("Entrada invalida.\n");
        return;
    }
    texto[strcspn(texto, "\n")] = '\0';  // remove o '\n' do fgets

    printf("Qual a chave correta? ");
    if (scanf("%d", &chave) != 1) {
        printf("Chave invalida.\n");
        return;
    }
    int c;
    while ((c = getchar()) != '\n' && c != EOF);  // descarta o '\n' deixado pelo scanf

    chave = ((chave % 26) + 26) % 26;  // normaliza (aceita chave negativa)
    chave = (26 - chave) % 26;         // caminho de volta, sempre entre 0 e 25

    for (int i = 0; texto[i] != '\0'; i++) { // descriptografa com a chave
        if (isupper((unsigned char)texto[i])) {
            texto[i] = 'A' + (texto[i] - 'A' + chave) % 26;
        } else if (islower((unsigned char)texto[i])) {
            texto[i] = 'a' + (texto[i] - 'a' + chave) % 26;
        }
    }

    printf("Texto descriptografado: %s\n", texto);
}
