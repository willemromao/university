// VETOR LEGAL OU CHATO (COM FUNÇÃO)

#include <stdio.h>

int scan(int n1, int n2) {
  if ((n1 - n2) % 2 == 0) return 1;
  else return 0;
}


int main(void) {
  int tam, n, aux, s;
  scanf("%d", &tam);
  int vetor[tam];

  aux = 1;
  for (int i = 0; i < tam; i++) {
    if (i > 0) {
      scanf("%d", &vetor[i]);
      n = vetor[i-1];
      s = scan(vetor[i], n);
      if (s == 0) aux = 0;
    }
      
    else scanf("%d", &vetor[i]);
  }
  
  if (aux == 1) printf("Legal");
  else printf("Chato");
  
  return 0;
}