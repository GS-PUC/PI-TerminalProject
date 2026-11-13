#include <stdio.h>

//Le um texto e imprime de volta no terminal
void ec() {
    char parameter[1024];
    fgets(parameter, sizeof(parameter), stdin);
    printf("%s\n", parameter);
    return;
}
