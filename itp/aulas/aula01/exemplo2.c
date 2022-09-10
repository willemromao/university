//Conversor de medidas NBA 2k
#include <stdio.h>

int main(){
	double altura_pes, altura_metros;
	double peso_libras, peso_quilos;

	//Vamos ler medidas em pÃ©s e libras
	printf("Digite o valor da altura (pés): ");
	scanf("%lf", &altura_pes);
	printf("Digite o valor do peso (libras): ");
	scanf("%lf", &peso_libras);

	//Vamos converter esses valores para metros e quilos
	altura_metros = 0.3038 * altura_pes;
	peso_quilos = 0.454 * peso_libras;

	//Imprimir esses valores convertidos ma tela para o usuÃ¡rio
	printf("Resultado\n");
	printf("Altura em metros: %.2lf\n", altura_metros);
	printf("Peso em quilos: %.2lf\n", peso_quilos);
	
	return 0;
}