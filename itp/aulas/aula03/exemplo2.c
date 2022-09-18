#include <stdio.h>

int main(){
    
    int n1, n2;
    char op;

    do{

        printf("Digite a conta desejada (Valor OP Valor):\n");
        scanf("%d %c %d", &n1, &op, &n2);

        switch (op){
            case '+': printf("%d\n", n1 + n2); break;
            case '-': printf("%d\n", n1 - n2); break; 
            case '*': printf("%d\n", n1 * n2); break; 
            case '/':
                if (n2 == 0) printf("Erro! Divisão por zero!\n");
                else printf("%d\n", n1 / n2);
            break; 
        }

    }while (op != 'F');

    return 0;
}