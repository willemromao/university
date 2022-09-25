//PROBLEMA: Bucho Burguer

#include <stdio.h>

int main() {
    int combo, dinheiro, troco;

    scanf("%d %d", &combo, &dinheiro);

    switch(combo) {
        case 1: troco = dinheiro - 12; break;
        case 2: troco = dinheiro - 23; break;
        case 3: troco = dinheiro - 31; break;
        case 4: troco = dinheiro - 28; break;
        case 5: troco = dinheiro - 15; break;
    }

    if(troco > 0){
        printf("Troco = %d reais", troco);
    }

    else if(troco = 0){
        printf("Deu certim!");
    }

    else if(troco < 0){
        printf("Saldo insuficiente! Falta %d reais", troco);
    }

    return 0;

}
