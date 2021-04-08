// Este programa lê um caractere e retorna o seu código ASCII.
//


#include <stdio.h>

int main()
{
    char c;

    printf("\nDigite um caractere: ");

    scanf("%c", &c);

    printf("\n\nO caractere digitado %c '%c'.\n", 130, c);

    if (c < 0)
        printf("\n\nSeu c%cdigo ASCII %c %d.\n\n", 162, 130, 256 + c);    // Evita a representação negativa do valor.

    else
        printf("\n\nSeu c%cdigo ASCII %c %d.\n\n", 162, 130, c);

    return 0;
}
