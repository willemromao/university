#include <stdio.h>

int soma(int x, int y){
    return x + y;
}

int main(){
    int x = soma(4,5);
    printf("x = %d\n", x);

    return 0; 
}