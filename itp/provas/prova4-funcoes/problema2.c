// AMIGOS NUM INTERVALO

#include <stdio.h>

/*

Determinar se dois números são amigos.

Dois números diferentes são amigos se cada um for igual à soma dos
divisores do outro (sem incluir os próprios números nos divisores).

Assim, você forneceu o trecho de código abaixo e pediu para ele implementar
as funções e depois criar um programa que recebe dois intervalos naturais
L1 = [A,B] e L2 = [C,D] e apresenta todos os valores em L1 que possuem ao menos um amigo em L2.

*/

// retorna verdadeiro se numero é divisível por divisor e falso em caso contrário
    int divisivel(int a, int b){
        if(a % b == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

// retorna a soma dos divisores de value no intervalo [1,value)
    int divisores(int a){
        int soma = 0;
        for(int i=1; i<a; i++){
            if (divisivel(a,i)) soma += i;
        }

        return soma;
    }

// retorna verdadeiro se a é amigo de b e falso em caso contrário
    int testa_amigos(int a, int b){
        int sX = divisores(a);
        int sY = divisores(b);
        if(sX == b && sY == a && a != b){
            return 1;
        }
        else{
            return 0;
        }
    }

// recebe dois intervalos naturais L1 = [A,B] e L2 = [C,D]
// apresenta todos os valores em L1 que possuem ao menos um amigo em L2.
    int main(){
        int A, B, C, D, aux = 0;

        scanf("%d %d %d %d", &A, &B, &C, &D);

        for(int i = A; i<= B; i++){
            for(int j= C; j<D; j++){
                if(testa_amigos(i, j)){
                    printf("O %d possui um amigo!\n", i);
                    aux++;
                }
            }
        }

        if(aux == 0){
            printf("Os intervalos nao apresentam amigos!");
        }

    return 0;
    }




