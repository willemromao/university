//SIMULADOR DE DADOS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int dado, vezes;
    int i;

    printf("Indique qual tipo de dado você deseja jogar: ");
    scanf("%d", &dado);

    printf("Quantas vezes você vai jogar esse dado: ");
    scanf("%d", &vezes);

    srand(time(NULL));

    for(i=0; i<vezes; i++){
        printf("%d ", rand()%dado +1);
    }
    printf("\n");

    return 0;
}