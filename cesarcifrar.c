#include <ctype.h>
#include <stdio.h>

void CaesarEncrypt(void){
    int chave;
    char texto[100];

    printf("Digite a frase que gostaria de criptografar: ");
    fgets(texto, sizeof(texto), stdin);

    printf("\nQual chave gostaria de usar? ");
    scanf("%d", &chave);
    chave = ((chave % 26) + 26) % 26;  // normaliza (aceita chave negativa)

    for (int i = 0; texto[i] != '\0'; i++) { // criptografa com a chave
        if (isupper((unsigned char)texto[i])) {
            texto[i] = 'A' + (texto[i] - 'A' + chave) % 26;
        } else if (islower((unsigned char)texto[i])) {
            texto[i] = 'a' + (texto[i] - 'a' + chave) % 26;
        }
    }

    printf("%s", texto);
}

void CaesarDecrypt(void){
    int chave;
    char texto[100];

    printf("Digite a frase que gostaria de descriptografar: ");
    fgets(texto, sizeof(texto), stdin);

    printf("\nQual a chave correta? ");
    scanf("%d", &chave);
    chave = ((chave % 26) + 26) % 26;  // normaliza (aceita chave negativa)
    chave = chave * -1; // torna a chave negativa, assim ela sera o caminho de volta

    for (int i = 0; texto[i] != '\0'; i++) { // criptografa com a chave
        if (isupper((unsigned char)texto[i])) {
            texto[i] = 'A' + (texto[i] - 'A' + chave) % 26;
        } else if (islower((unsigned char)texto[i])) {
            texto[i] = 'a' + (texto[i] - 'a' + chave) % 26;
        }
    }

    printf("%s", texto);
}
