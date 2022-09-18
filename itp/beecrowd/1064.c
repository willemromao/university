#include <stdio.h>

int main(){

    float n = 0, m, sp = 0;
    int i= 0, p = 0;

    for(i = 1; i <= 6; i++){
        scanf("%f", &n);
        if (n > 0){
            p = p + 1;
            sp = sp + n;
        }
    }

    m =  sp / p;

    printf("%d valores positivos\n", p);
    printf("%.1f\n", m);

    return 0;
}
