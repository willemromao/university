#include <stdio.h>
#include <string.h>


int main(void) {
  int i;
  char c[7];
  
  scanf ("%s", c);
  
  for (i = 0; i < strlen(c); i++) printf ("%c\n", c[i]);

  return 0;
}