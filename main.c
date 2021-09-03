#include "scanner.h"
#include "scanner.c"

char caracter;

int main() {
    while ((caracter = getchar()) != EOF) {
        get_token(caracter);
    }
    if (caracter == EOF) {
        printf("\n Fin de Texto: ");
    }
    return 0;
}