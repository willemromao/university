// ENGRENAGEM DE METAL!

#include <stdio.h>

int main() {
    char mapa[6][6];
    char comandos;
    int movimentos, x, y, i, j;
    int fora = 0, detectado = 0;

    for (i=0; i<6; i++)
        for (j=0; j<6; j++)
            scanf(" %c", &mapa[i][j]);
    
    scanf("%d", &movimentos);
    scanf("%d %d", &x, &y);
    x--;
    x--;

    for(i=0; i<movimentos; i++) {
        scanf(" %c", &comandos);

        switch(comandos) {
            case 'D': y++; break;
            case 'E': y--; break;
            case 'C': x--; break;
            case 'B': x++; break;
        }

        if(x < 0 || y < 0 || x >= 6 || y >= 6) {
            fora = 1;
            break;
        }
        else {
            if(x > 0 && mapa[x-1][y] == 'v')
                detectado = 1;
            else if(x < 5 && mapa[x+1][y] == '^')
                detectado = 1;
            else if(y > 0 && mapa[x][y-1] == '>')
                detectado = 1;
            else if(y < 5 && mapa[x][y+1] == '<')
                detectado = 1;
            
        }

    }

    if(fora)
        printf("Movimento Inválido!\n");
    else if(detectado)
        printf("Freeze!!\n");
    else
        printf("Like a Ninja...\n");


    return 0;
}