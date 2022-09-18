#include <stdio.h>

int main(){
	int inicial, final;
	int i, j, aux, primo;

	scanf("%d %d", &inicial, &final);

	//Troca inicial e final de posição, se o valor de inicial for maior
	if(inicial > final){
		aux = inicial;
		inicial = final;
		final = aux;
	}

	//Para todos os números no intervalo entre inicial e final
	for(i=inicial; i<=final; i++){
		//Verificar se i é primo ou não
		//Verificar se algum número entre 2 e i-1 divide i
		primo = 0;

		for(j=2; j<i; j++){
			if(i%j == 0)
				primo++;
		}
		//Se sim, não é primo, continua avaliando o próximo valor
		if(primo == 0 && i != 1) printf("%d ", i);
	}	

	printf("\n");

	return 0;
}