// DECLARANDO FUNÇÕES

#include <stdio.h>

int ehPar(int n){
    
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }

    return n;
}

int main(){

    int n;

    scanf("%d", &n);
    
    if (ehPar(n) == 1){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}


