#include <stdio.h>

int main() {
    int vetor[7];
    int i;

    /*for (i=0; i<3; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i=0; i<3; i++) {
        printf("%d ", vetor[i]);
    }*/

    for (i=0; i<7; i++) {
        vetor[i] = 7;
        printf("%d", vetor[i]);
    }

    return 0;
}