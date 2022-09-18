#include <stdio.h>

int main(){
    int thor, starlord, spider;

    scanf("%d %d %d", &thor, &starlord, &spider);

    if(thor == starlord && thor == spider){
        printf("Empate\n");
    }
    else if(thor != starlord && thor != spider){
        printf("Thor\n");
    }
    else if(starlord != thor && starlord != spider){
        printf("Star Lord!\n");
    }
    else{
    printf("Homem-Aranha!\n");
    }
    
    return 0;
}