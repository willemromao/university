#include <stdio.h>
#include <math.h>

int main(){

    int N, X, i;

    scanf("%d", &N);

    for(i = 0; (i == N) || (N < 1 && N > 100); i++)
        scanf("%d", &X);

        if (X > 1 && X <= pow(10,7)){
            if(X % 1 == 0 && X % X == 0){
                printf("%d eh primo\n", X);
            }
            else{
                printf("%d nao eh primo\n", X);
            }
        }

    return 0;
}