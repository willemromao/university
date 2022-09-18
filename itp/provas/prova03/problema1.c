#include <stdio.h>

int main(){
  int linhas;
  char letra;

  scanf("%d %c", &linhas, &letra);

  linhas--;

  int metade = linhas / 2;

  //primeira metade
  for(int i=0; i<metade; i++){
       //imprimir espaços antes da primeira letra
       for(int j = 0; j < 1; j++)
          printf(" ");
        printf("%c", letra);
        //imprimir espaços em branco entre as letras
        if(linhas%2 == 0){
            for(int j = 0; j < (metade-i-1)*2; j++)
            printf(" ");
        }
        else{
            for(int j = 0; j < ((metade-i)*2)-1; j++)
            printf(" ");
        }
        printf("%c\n", letra);
  }

  //quando impar, linha do meio
  if(linhas%2 != 0){
        for(int i =0; i<metade; i++)
          printf(" ");
            printf("%c\n", letra);
  }


  //segunda metade
  for(int i=metade-1; i>=0; i--){
       //imprimir espaços antes da primeira letra
       for(int j = 0; j < 1; j++)
          printf(" ");
        printf("%c", letra);
        //imprimir espaços em branco entre as letras
        for(int j = 0; j < (metade-i-1)*2; j++)
          printf(" ");
        printf("%c\n", letra);
  }

  return 0;
}

//teste