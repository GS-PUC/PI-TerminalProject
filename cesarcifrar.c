#include <ctype.h>

void CaesarEncrypt(char *texto, int chave) {
    chave = ((chave % 26) + 26) % 26;  // normaliza (aceita chave negativa)

    for (int i = 0; texto[i] != '\0'; i++) {
        if (isupper((unsigned char)texto[i])) {
            texto[i] = 'A' + (texto[i] - 'A' + chave) % 26;
        } else if (islower((unsigned char)texto[i])) {
            texto[i] = 'a' + (texto[i] - 'a' + chave) % 26;
        }
    }
}

void CaesarDecrypt(char *texto, int chave){
    cifrar(texto, -chave);
}