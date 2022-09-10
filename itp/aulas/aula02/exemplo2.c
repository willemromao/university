#include <stdio.h>

int main() {
  int petalas;

  scanf("%d", &petalas);
  
  petalas%2 == 0 ? printf("Mal me quer! Estalo!\n") : printf("Bem me quer! #xatiado\n");

  return 0;
}