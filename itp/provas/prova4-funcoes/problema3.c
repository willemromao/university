// NÚMERO PERFEITO (FUNÇÃO)

#include <stdio.h>

int nperfeito(int X){

    int soma_divisores = 0;
    int i, nperfeito;

//achar divisores

    for(i=1; i<X; i++){

        if(X % i == 0){
            soma_divisores = soma_divisores + i;
        }
    } 

//testar se soma_dividores é = X
    if(soma_divisores == X){
        nperfeito = 1;
    }
    else{
        nperfeito = 0;
    }
    // printf("soma de %d= %d\n", X, soma_divisores);

    return nperfeito;
}

int main(){

int X, N, j;
    
    //recebe N casos
    scanf("%d", &N);

    //N = número de casos a serem verificados

    for(j=0; j<N; j++){
    //recebe X
        scanf("%d", &X);
        //determinar se é perfeito
        if(nperfeito(X) == 1){
            printf("%d eh perfeito\n", X);
        }
        else{
            printf("%d nao eh perfeito\n", X);
        }
    }


    return 0;
}