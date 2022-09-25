//PROBLEMA: Triângulo de Floyd

#include <stdio.h>
int main(){

int n, cont = 0, i = 0, j = 0;
    scanf("%d", &n);

    if (n > 0){
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            cont++;
            if (cont < 10){
                printf(" %d ", cont);
    }
    else{
        printf("%d ", cont);
    }
}
    printf("\n");
}
}
else{
    printf("Você entrou com %d, tente de novo na próxima", n);
}

    return 0;
}