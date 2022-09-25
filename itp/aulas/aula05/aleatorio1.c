#include <stdio.h>

int main(){

    int i;
    int vetor[100];

    for(i=0; i<100; i++){
        vetor[i] = 1;
    }

    printf("%d", vetor[99]);

    return 0;
}