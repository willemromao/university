#include <stdio.h>

int main() {
    int x[] = {1, 3, 9, 27, 1000};
    int y[] = {3, 9, 27, 81, 1000};
    
    int q, h, m;
    scanf("%d %d %d", &q, &h, &m);
    
    printf(
        q*x[--h] >= y[--m]
            ? "Heróis vencerão!\n"
            : "Melhor chamar Saitama!\n"
    );
    
    return 0;
}