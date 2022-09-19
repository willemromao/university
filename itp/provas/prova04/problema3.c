#include <stdio.h>

int nperfeito(int X){

int divisor, soma_divisores, i, nperfeito;

//achar divisores

    for(i=1; i<X, i++){

        if(X % i == 0){
            divisor = i;
            soma_divisores = soma_divisores + i;
        }
    } 

//testar se soma_divisores é = X
    if(soma_divisores == X){
        nperfeito = 1;
    }
    else{
        nperfeito = 0;
    }

    return nperfeito;
}

int main(){

int N, X, j;
    
    //recebe N casos
    scanf("%d", &N);

    //N = número de casos a serem verificados

    for(j=0; j<=N; j++){
    //recebe X
        scanf("%d", &X);
    }

    //determinar se é perfeito
    if(nperfeito(X) == 1){
        printf("%d eh perfeito", X);
    }
    else(nperfeito(X) ==0){
        printf("%d nao eh perfeito", X);
    }

    return 0;
}