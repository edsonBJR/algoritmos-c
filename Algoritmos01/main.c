#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n", soma());
    return 0;
}

int soma() {

    int a = 3;
    int b = 5;
    int resultado = a + b;
    printf("O resultado da soma %d\n", &resultado);
    return 0;
}
