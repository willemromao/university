//PROBLEMA: Letra popular

#include <stdio.h>

int main() {
    char letra;
    int quantidade;
    float indice;

    scanf("%c %d %f", &letra, &quantidade, &indice);

    printf("A popularidade de %c é %.1f\n", letra, quantidade * indice);

    return 0;
}