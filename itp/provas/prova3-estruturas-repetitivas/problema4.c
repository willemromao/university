// CONTAGEM POR PROVA (ATLETISMO)

#include <stdio.h>

int main(){

    char letra;
    int numero, i, conts, contc, contl, conta;
    conta = contl = contc = conts = 0;
    scanf("%i", &numero);

    if (numero != 0){
        for (i = -1; i <= numero; i++){
            do{
                scanf("%c", &letra);

                if (letra == 'S'){
                    conts += 1;
                    conta += 1;
                }
                else if (letra == 'C'){
                    contc += 1;
                    conta += 1;
                }
                else if (letra == 'L'){
                    contl += 1;
                    conta += 1;
                }
            }
            
            while (letra != 'F');
        }

        printf("%i %i %i %i", contc, conts, contl, conta);
    }
    
    else{
        printf("%i %i %i %i", contc, conts, contl, conta);
    }

    return 0;
}