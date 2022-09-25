// DIFERENÇA SIMÉTRICA

#include <stdio.h>

int main() {
  int N, M;
  scanf("%d %d", &N, &M);
  int CN[N], CM[M];

  
  for (int i = 0; i < N ; i++) scanf("%d", &CN[i]);
  for (int j = 0; j < M ; j++) scanf("%d", &CM[j]);

  for (int k; k < N; k++) {
    for (int l; l < M; l++) {
      if (CN[k] != CM[l]) {printf("%d ", CM[l]);}
    }
  }
  
  return 0;
}