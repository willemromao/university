#include <stdio.h>

int main(){

    float n;
    int i, v;

    for(i = 1; i <= 6; i++){
        scanf("%f", &n);
        if (n >= 0){
            v = v + 1;
        }
        
    }

    printf("%d valores positivos\n", v);

    return 0;
}