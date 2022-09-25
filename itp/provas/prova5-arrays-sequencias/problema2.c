// NOTAS DOS ALUNOS EM VETORES

#include <stdio.h>


int main(void) {
    int qtd, num, s, aux;
    char trash;
    scanf("%d", &qtd);
    float nota, VN[qtd], VA[qtd], VRec[qtd], VRep[qtd];

    aux = 0;
    printf("Aprovados: ");
    for (int i = 0; i < qtd ; i++) {
        scanf("%d %c %f", &num, &trash, &nota);
        VN[i] = nota;
        if (nota >= 7.0) {
            VA[num] = nota; 
            if (aux++ == 0) printf("%d (%.1f)", num, VA[num]);
            else printf(", %d (%.1f)", num, VA[num]);
        }   
    }
    printf("\nRecuperação: ");
    aux = 0;
  
    for (int j = 0; j < qtd ; j++) {
        if (VN[j] >= 5.0 && VN[j] < 7.0) {
            VRec[num] = VN[j];
            if (aux++ == 0) printf("%d (%.1f)", j+1, VRec[num]);
            else printf(", %d (%.1f)", j+1, VRec[num]);      
        }   
    }                  
    printf("\nReprovados: ");   
    aux = 0;                 
  
    for (int k = 0; k < qtd ; k++) {
        if (VN[k] < 5) {
            VRep[num] = VN[k];
            if (aux++ == 0) printf("%d (%.1f)", k+1, VRep[num]);
            else printf(", %d (%.1f)", k+1, VRep[num]);
        }    
    } 

    return 0;
}