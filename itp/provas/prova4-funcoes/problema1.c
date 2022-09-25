//PROBLEMA: Visor de Retângulos

#include <stdio.h>

void contem(float b1, float b2, float b3, float b4, float a1, float a2, float a3, float a4){
    
    if (a1 < b1 && a2 < b2 && a3 < b1 && a4 < b2){
        printf("Nao posso afirmar!\n");
    }
    else if (a4 == b1){
        printf("Nao posso afirmar!\n");
    }
    else if (b3 - b1 > a3 - a1 && b4 - b2 > a4 - a2){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", b1, b2, b3, b4, a1, a2, a3, a4);
    }
    else if (b3 - b1 < a3 - a1 && b4 - b2 < a4 - a2){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", a1, a2, a3, a4, b1, b2, b3, b4);
    }
    else{
        printf("Nao posso afirmar!\n");
    }
}

int main(){
    int x = 1;
    float b1, b2, b3, b4;
    float a1, a2, a3, a4;
    scanf("%f %f %f %f", &b1, &b2, &b3, &b4);

    do{
        scanf("%f %f %f %f", &a1, &a2, &a3, &a4);
        if (a1 == 0 && a2 == 0 && a3 == 0 && a4 == 0){
            x = 0;
        }
        else{
            contem(b1, b2, b3, b4, a1, a2, a3, a4);
        }
    } while(x != 0);
    
    return 0;
}