// DIFERENÇA SIMÉTRICA

/* Entrada
    Linha 1: valores inteiros N e M indicando a quantidade de elementos de cada um dos conjuntos.
    Linha 2: N valores inteiros com os valores do primeiro conjunto.
    Linha 3: M valores inteiros com os valores do segundo conjunto.
    Os valores de cada conjunto não se repetem (esta é uma propriedade dos conjuntos). */

/* Saída
    Seu programa deve enviar para a saída uma única linha contendo a sequência de valores do
    conjunto resultante da diferença simétrica em ordem crescente. */


#include <stdio.h>

int main() {
  int N, M;
  scanf("%d %d", &N, &M);
  int CN[N], CM[M];
  
  for (int i = 0; i < N ; i++) scanf("%d", &CN[i]);
  for (int j = 0; j < M ; j++) scanf("%d", &CM[j]);

  for (int k = 0; k < N; k++) {
    for (int l = 0; l < M; l++) {
      if (CN[k] != CM[l]){
        printf("%d", (CN[k] != CM[l]));
      }
      else if (CM[l] != CN[k]){
        printf("%d", (CM[l] != CN[k]));
      }
    }
  }
  
  return 0;
}