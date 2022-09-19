#include <stdio.h>

int n;

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

    scanf("%d", &n);
    
    if (ehPar(n) == 1){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}


