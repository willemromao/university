#include <stdio.h>

int main() {

float T, C, F, K;
char escala;

scanf("%f %c", &T, &escala);

if(escala == 'C'){
    C = T;
    F = C * 1.8 + 32;
    K = C + 273.15;
    printf("Celsius: %.2f\n", C);
    printf("Farenheit: %.2f\n", F);
    printf("Kelvin: %.2f\n", K);
}

else if(escala == 'F'){
    F = T;
    C = (F - 32) / 1.8;
    K = C + 273.15;
    printf("Celsius: %.2f\n", C);
    printf("Farenheit: %.2f\n", F);
    printf("Kelvin: %.2f\n", K);
}

else if(escala == 'K'){
    K = T;
    C = K - 273.15;
    F = C * 1.8 + 32;
    printf("Celsius: %.2f\n", C);
    printf("Farenheit: %.2f\n", F);
    printf("Kelvin: %.2f\n", K);
}

return 0;

}