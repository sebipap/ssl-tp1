#include "scanner.h"

int i = 0;

void get_token(char caracter)
{
    if (isspace(caracter))
    {
        i = 0;
    }
    else
    {
        if (caracter == ',')
        {
            printf("\nSeparador: %c", caracter);
            i = 0;
        }
        else
        {
            if (i == 0)
            {
                printf("\nCadena: ");
            }
            i++;
            printf("%c", caracter);
        }
    }
}