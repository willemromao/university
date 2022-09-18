#include <stdio.h>

int main(){

  int aptos, s, sa;
  float tempos, min;

  aptos = s = sa = 0;
  while (tempos != -1) {
    scanf("%f", &tempos);
    if (s == 0){
      min = tempos;
    }
    else if (tempos <= min)
      aptos += 1;
    s += 1;
  }
    
  aptos -= 1;
  
  printf("%d", aptos);
  if (aptos > 0)
    sa = 1;

  if (aptos - 8 > 0) {
    do {
      aptos -= 8;
      sa += 1;
    } while (aptos - 8 > 0);
  }

  printf(" %d", sa);

  return 0;
}