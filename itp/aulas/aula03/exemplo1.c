/* Faça um programa que leia vários números e imprima o somatório deles.
Seu programa deve encerrar quando ler um número não positivo. */

#include <stdio.h>

int main(){

    int somatorio, numero;

    somatorio = 0;

    scanf("%d", &numero);

    while(numero > 0){
        //somatorio += numero;
        somatorio = somatorio + numero;
        scanf("%d", &numero);
    }

    printf("A soma foi: %d\n", somatorio);

    return 0;
}