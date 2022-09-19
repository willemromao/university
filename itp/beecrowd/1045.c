#include <stdio.h>

void imprime_menu(){
  printf("\nEscolha a opção:\n");
  printf("1 - Informar triangulo\n");
  printf("2 - Testar se é um triângulo válido\n");
  printf("3 - Testar tipo em relação aos ângulos\n");
  printf("4 - Testa tipo em relação aos lados\n");
  printf("5 - Relizar todos os testes\n");
  printf("6 - Encerrar programa\n");
  printf("Selecione: ");
}

int testa_validade(int a, int b, int c){
  if(a >= b+c){
    printf("Não é um triângulo\n");
    return 0;
  }
  else
    return 1;
}

void testa_angulos(int a, int b, int c){
  if(a*a == b*b + c*c)
    printf("Triângulo Retângulo\n");
  else if(a*a > b*b + c*c)
    printf("Triângulo Obtusângulo\n");
  else
    printf("Triângulo Acutângulo\n");
}

void testa_lados(int a, int b, int c){
  if(a == b && a == c)
    printf("Triângulo Equilátero\n");
  else if(a == b || a== c || b == c)
    printf("Triângulo Isóceles\n");
  else
    printf("Triângulo Escaleno\n");
}

int main(void) {
  int init, op;
  int lado1, lado2, lado3, aux;

  //Só vamos imprimir uma vez, não ficará junto do menu
  printf("Bem vindo ao triangulizer!\n");

  do{
    imprime_menu();
    scanf("%d", &op);

    switch(op){
      case 1:
        printf("Digite os lados:\n");
        scanf("%d %d %d", &lado1, &lado2, &lado3);

        //Trocando lado1 para o maior, facilitará as outras operações
        if(lado2 > lado1 && lado2 > lado3){
          aux = lado1;
          lado1 = lado2;
          lado2 = aux;
        }
        else if(lado3 > lado1 && lado3 > lado2){
          aux = lado1;
          lado1 = lado3;
          lado3 = aux;
        }

        init = 1;
        printf("Triângulo lido com sucesso!\n");
        break;
      case 2:
        if(init != 0){
          if(testa_validade(lado1, lado2, lado3) == 1){
            printf("Triângulo Válido!\n");
          }
        }
        break;
      case 3:
        if(init != 0 && testa_validade(lado1, lado2, lado3) == 1){
          testa_angulos(lado1, lado2, lado3);
        }
        break;
      case 4:
        if(init != 0 && testa_validade(lado1, lado2, lado3) == 1){
          testa_lados(lado1, lado2, lado3);
        }
        break;
      case 5:
        if(init != 0 && testa_validade(lado1, lado2, lado3) == 1){
          printf("Triângulo Válido!\n");
          testa_angulos(lado1, lado2, lado3);
          testa_lados(lado1, lado2, lado3);
        }
        break;
      case 6:break;
      default: printf("Opção inválida!\n");
    }
  }while(op != 6);

  return 0;
}