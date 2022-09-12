#include <stdio.h>

int main(){
  int n, i, j, aux, aux2 = 1;
  char letra;

  scanf("%d %c", &n, &letra);

  aux = n;

  if (n % 2 != 0)
  {
  
    for (i = 0; i < ((n-1)/2); i++)
    {
      
      if (i != 0)
        {
          for (j = 0; j < i; j++ )
          {
            printf(" ");
          } 
        }
        
        printf("%c", letra);
        
        for (j = 0; j < (aux-3); j++ )
        {
          printf(" ");
        }
        
        aux = aux - 2;
    
        printf("%c\n", letra);
    }
        
    aux = n;

    
    for (i = 0; i < ((n-1)/2); i++)
    {
      
      for (j = 1; j < ((aux - 1) / 2); j++ )
      {
        printf(" ");
      }
      
      printf("%c", letra);
      
      if (i != 0)
      {
        for (j = 0; j < i; j++ )
        {
          printf("  ");
        }
      }
      
      aux = aux - 2;
      
      printf("%c\n", letra);
    }
  }
  else if(n % 2 == 0)
  {
  
    for (i = 0; i < ((n/2)-1); i++)
    {
      
      if (i != 0)
        {
          for (j = 0; j < i; j++ )
          {
            printf(" ");
          } 
        }
        
        printf("%c", letra);
        
        for (j = 0; j < (aux-3); j++ )
        {
          printf(" ");
        }
        
        aux = aux - 2;
        
        printf("%c\n", letra);
    }

    for (j = 0; j < ((n/2)-1); j++ )
      {
        printf(" ");
      }
  
    printf("%c\n", letra);
    
    aux = n;

   
    for (i = 0; i < ((n/2)-1); i++)
    {
    
      for (j = 1; j < ((aux - 1) / 2); j++ )
      {
        printf(" ");
      }
     
      printf("%c", letra);
     
        for (j = 0; j < aux2; j++ )
        {
          printf(" ");
        }
      
      aux = aux - 2;
      aux2 = aux2 + 2;
     
      printf("%c\n", letra);
    }
  }
  
  return 0;
}